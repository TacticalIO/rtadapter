var util = require("util"),
	EventEmitter = require("events").EventEmitter,
	fs = require('fs'),
	app = require('../build/Release/adapter');

var App = function(name, ds) {
	this.klass = JSON.parse(fs.readFileSync('package.json')).name;
	this.name = name;
	this.state = 'uploaded';
	this.ds = ds;
}

util.inherits(App, EventEmitter);

App.prototype.init = function() {
	EventEmitter.call(this);
	app.init(name);
	this.state = 'initialized';
	this.emit('state', { name: name, state: this.state });
}

App.prototype.start = function() {
	app.start(name);
	this.state = 'active';
	this.emit('state', { name: name, state: this.state });
}

App.prototype.stop = function() {
	app.stop(name);
	this.state = 'initialized';
	this.emit('state', { name: name, state: this.state });
}

App.prototype.pause = function() {
	app.pause(name);
	this.state = 'paused';
	this.emit('state', { name: name, state: this.state });
}

App.prototype.resume = function() {
	app.resume(name);
	this.state = 'active';
	this.emit('state', { name: name, state: this.state });
}

App.prototype.destroy = function() {
	app.destroy();
	this.state = 'destroyed';
	this.emit('state', { name: name, state: this.state });
}

exports.App = App;

