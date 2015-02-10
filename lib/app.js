var util = require("util"),
	EventEmitter = require("events").EventEmitter,
	fs = require('fs'),
	app = require('../build/Release/adapter');

var App = function(name) {
	this.klass = JSON.parse(fs.readFileSync('package.json')).name;
	this.name = name;
	this.state = 'uploaded';
}

util.inherits(App, EventEmitter);

App.prototype.init = function(name) {
	EventEmitter.call(this);
	app.init(name);
	this.state = 'initialized';
	this.emit('state', { name: name, state: this.state });
}

App.prototype.start = function(name) {
	app.start(name);
	this.state = 'active';
	this.emit('state', { name: name, state: this.state });
}

App.prototype.stop = function(name) {
	app.stop(name);
	this.state = 'initialized';
	this.emit('state', { name: name, state: this.state });
}

App.prototype.pause = function(name) {
	app.pause(name);
	this.state = 'paused';
	this.emit('state', { name: name, state: this.state });
}

App.prototype.resume = function(name) {
	app.resume(name);
	this.state = 'active';
	this.emit('state', { name: name, state: this.state });
}

exports.App = App;

