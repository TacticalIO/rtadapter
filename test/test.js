var App = require('../index.js').App,
	fs = require('fs'),
	exec = require('child_process').exec,
	debug = require('debug')('test');

debug('Folder: ' + __dirname);

var config = JSON.parse(fs.readFileSync('test/data/config.json'));
var ds = require('tio').data(config.mqtt);

var app = new App('toto', ds);

app.on('state', function(value) {
	console.log('state change: ', value, app.klass);
});

app.init('test1');
app.start('test1');
app.pause('test1');
app.resume('test1');
app.stop('test1');