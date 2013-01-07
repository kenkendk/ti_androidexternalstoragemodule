# mkdfs Module

## Description

Android External Storage Module

## Accessing the mkdfs Module

To access this module from JavaScript, you would do the following:

	var mkdfs = require("dk.mikkendigital.mkdfs");

The mkdfs variable is a reference to the Module object.	

## Reference

### dk.mikkendigital.mkdfs.externalStorageDirectory

Returns the device external storage directory as a string.
<a href="https://developer.android.com/reference/android/os/Environment.html#getExternalStorageDirectory()">This is the same as calling Environment.getExternalStorageDirectory()</a>.

### dk.mikkendigital.mkdfs.externalFilesDir

Returns the applications external storage folder as a string.
This is the same as calling <a href="https://developer.android.com/reference/android/content/Context.html#getExternalFilesDir(java.lang.String)">Context.getExternalFilesDir()</a>.

## Usage
~~~
// Create a file in the external storage folder
if (Ti.Platform.name == "android" && Ti.Filesystem.isExternalStoragePresent()) {
	var mkdfs = require('dk.mikkendigital.mkdfs');
	Ti.API.info("module externalStorageDirectory is => " + mkdfs.externalStorageDirectory);
	Ti.API.info("module externalFilesDir is => " + mkdfs.externalFilesDir);
	
	var file = Ti.Filesystem.getFile('file://' + mkdfs.externalFilesDir, 'sample.txt');
	file.write('Newly created file on SD card');
} else {
	alert('No external storage found!');
}
~~~

## Author

Kenneth Skovhede, Mikken Digital S.M.B.A.

## License

The MIT License (MIT)

Copyright (c) 2013 Mikken Digital S.M.B.A.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.