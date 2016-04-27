//
//  GPUImageBeatifyFilter.h
//  yolo
//
//  Created by guikz on 15/12/23.
//  Copyright © 2015年 guikz. All rights reserved.
//

#import <GPUImage/GPUImage.h>

@interface GPUImageBeautifyFilter : GPUImageThreeInputFilter
{
    GLint smoothDegreeUniform;
}

@property (nonatomic, assign) CGFloat intensity;

@end
