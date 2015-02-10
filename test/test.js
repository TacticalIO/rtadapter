var App = require('../index.js').App;

var app = new App();

app.on('state', function(value) {
	console.log('state change: ', value, app.klass);
});

app.init('test1');
app.start('test1');
app.pause('test1');
app.resume('test1');
app.stop('test1');