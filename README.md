# BeautifyFaceDemo
A Simple Demo of Face Beautification Based On GPUImage

It's based on Bilateral Filter, Canny Edge Detection and Skin Color Detection

# Sample Code
You can easily beautify a live video using the following code:
<pre><code> 
GPUImageVideoCamera *videoCamera = [[GPUImageVideoCamera alloc] initWithSessionPreset:AVCaptureSessionPreset640x480 cameraPosition:AVCaptureDevicePositionBack];
videoCamera.outputImageOrientation = UIInterfaceOrientationPortrait;

GPUImageView *filterView = [[GPUImageView alloc] initWithFrame:CGRectMake(0.0, 0.0, viewWidth, viewHeight)];

GPUImageBeautifyFilter *beautifyFilter = [[GPUImageBeautifyFilter alloc] init];
[videoCamera addTarget:beautifyFilter];
[beautifyFilter addTarget:filterView];

[videoCamera startCameraCapture];
</code></pre>

# Reference
http://www.csie.ntu.edu.tw/~fuh/personal/FaceBeautificationandColorEnhancement.A2-1-0040.pdf

http://m.blog.csdn.net/article/details?id=50496969
