# BeautifyFaceDemo
基于GPUImage的人脸磨皮、美白、提亮的美颜滤镜

GPUImageBeautifyFilter是一个自定义的美颜滤镜，可以用来处理实时视频流或者是静态图片

主要原理是双边滤波、Canny边缘检测和肤色检测

# 算法流程图
<p><a href="https://github.com/Guikunzhi/BeautifyFaceDemo/blob/master/FlowChart.png" target="_blank"><img src="https://github.com/Guikunzhi/BeautifyFaceDemo/blob/master/FlowChart.png" alt="alt text" height="566" width="467"></a></p>

# 示例代码
添加以下几行代码即可快捷实现视频实时滤镜:
<pre><code> 
GPUImageVideoCamera *videoCamera = [[GPUImageVideoCamera alloc] initWithSessionPreset:AVCaptureSessionPreset640x480 cameraPosition:AVCaptureDevicePositionBack];
videoCamera.outputImageOrientation = UIInterfaceOrientationPortrait;

GPUImageView *filterView = [[GPUImageView alloc] initWithFrame:CGRectMake(0.0, 0.0, viewWidth, viewHeight)];

GPUImageBeautifyFilter *beautifyFilter = [[GPUImageBeautifyFilter alloc] init];
[videoCamera addTarget:beautifyFilter];
[beautifyFilter addTarget:filterView];

[videoCamera startCameraCapture];
</code></pre>

# 截图
<p><a href="https://github.com/Guikunzhi/BeautifyFaceDemo/blob/master/origin.png" target="_blank"><img src="https://github.com/Guikunzhi/BeautifyFaceDemo/blob/master/origin.png" alt="alt text"  height="667" width="375"></a><a href="https://github.com/Guikunzhi/BeautifyFaceDemo/blob/master/result.png" target="_blank"><img src="https://github.com/Guikunzhi/BeautifyFaceDemo/blob/master/result.png" alt="alt text"  height="667" width="375"></a></p>

# 参考资料
http://www.csie.ntu.edu.tw/~fuh/personal/FaceBeautificationandColorEnhancement.A2-1-0040.pdf

http://m.blog.csdn.net/article/details?id=50496969
