var util = require("util"),
	EventEmitter = require("events").EventEmitter,
	fs = require('fs'),
	app = require('../build/Release/adapter'),
	debug = require('debug')('app');

var App = function(name, ds) {
	this.klass = JSON.parse(fs.readFileSync('package.json')).name;
	this.name = name;
	this.state = 'uploaded';
	this.ds = ds;
	debug(this.klass + ' instantiated with name ' + this.name + ' (' + this.state + ')');
}

util.inherits(App, EventEmitter);

App.prototype.init = function() {
	EventEmitter.call(this);
	app.init(this.name, this.ds);
	this.state = 'initialized';
	this.emit('state', { name: this.name, state: this.state });
}

App.prototype.start = function() {
	app.start(this.name);
	this.state = 'active';
	this.emit('state', { name: this.name, state: this.state });
}

App.prototype.stop = function() {
	app.stop(this.name);
	this.state = 'initialized';
	this.emit('state', { name: this.name, state: this.state });
}

App.prototype.pause = function() {
	app.pause(this.name);
	this.state = 'paused';
	this.emit('state', { name: this.name, state: this.state });
}

App.prototype.resume = function() {
	app.resume(this.name);
	this.state = 'active';
	this.emit('state', { name: this.name, state: this.state });
}

App.prototype.destroy = function() {
	app.destroy();
	this.state = 'destroyed';
	this.emit('state', { name: this.name, state: this.state });
}

exports.App = App;

