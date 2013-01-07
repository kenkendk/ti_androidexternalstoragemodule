// open a single window
var win = Ti.UI.createWindow({
	backgroundColor:'white'
});
var label1 = Ti.UI.createLabel();
var label2 = Ti.UI.createLabel();
win.add(label1);
win.add(label2);
win.open();

if (Ti.Platform.name == "android") {
	var mkdfs = require('dk.mikkendigital.mkdfs');
	Ti.API.info("module is => " + mkdfs);

	if (Ti.Filesystem.isExternalStoragePresent())
	{
		label1.text = mkdfs.getExternalStorageDirectory();
		label2.text = mkdfs.getExternalFilesDir();
	
		Ti.API.info("module externalStorageDirectory is => " + mkdfs.externalStorageDirectory);
		Ti.API.info("module externalFilesDir is => " + mkdfs.externalFilesDir);
	} else {
		label1.text = "No external storage found";
		label2.text = "No external storage found";
	}
} else {
	label1.text = "Not supported on this platform";
	label2.text = "Not supported on this platform";
}

