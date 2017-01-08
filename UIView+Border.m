//
//  UIView+Border.m
//  Layout
//
//  Created by YUBIN on 2016/12/26.
//  Copyright © 2016年 LD. All rights reserved.
//

#import "UIView+Border.h"

@implementation UIView (Border)

- (void)addTopBorderWithColor:(UIColor *)color height:(CGFloat)height
{
    [self addTopBorderWithColor:color height:height leading:0 trailing:0];
}
- (void)addLeftBorderWithColor:(UIColor *)color width:(CGFloat)width
{
    [self addLeftBorderWithColor:color width:width top:0 bottom:0];
}
- (void)addRightBorderWithColor:(UIColor *)color width:(CGFloat)width
{
    [self addRightBorderWithColor:color width:width top:0 bottom:0];
}
- (void)addBottomBorderWithColor:(UIColor *)color height:(CGFloat)height
{
    [self addBottomBorderWithColor:color height:height leading:0 trailing:0];
}

- (void)addTopBorderWithColor:(UIColor *)color height:(CGFloat)height leading:(CGFloat)leading trailing:(CGFloat)trailing
{
    CALayer *topLayer = [[CALayer alloc] init];
    topLayer.frame = CGRectMake(leading, 0, self.frame.size.width-leading-trailing, height);
    topLayer.backgroundColor = color.CGColor;
    [self.layer addSublayer:topLayer];
}
- (void)addLeftBorderWithColor:(UIColor *)color width:(CGFloat)width top:(CGFloat)top bottom:(CGFloat)bottom
{
    CALayer *leftLayer = [[CALayer alloc] init];
    leftLayer.frame = CGRectMake(0, top, width, self.frame.size.height-top-bottom);
    leftLayer.backgroundColor = color.CGColor;
    [self.layer addSublayer:leftLayer];
}
- (void)addRightBorderWithColor:(UIColor *)color width:(CGFloat)width top:(CGFloat)top bottom:(CGFloat)bottom
{
    CALayer *rightLayer = [[CALayer alloc] init];
    rightLayer.frame = CGRectMake(self.frame.size.width-width, top, width, self.frame.size.height-top-bottom);
    rightLayer.backgroundColor = color.CGColor;
    [self.layer addSublayer:rightLayer];
}
- (void)addBottomBorderWithColor:(UIColor *)color height:(CGFloat)height leading:(CGFloat)leading trailing:(CGFloat)trailing
{
    CALayer *bottomLayer = [[CALayer alloc] init];
    bottomLayer.frame = CGRectMake(leading, self.frame.size.height - height, self.frame.size.width-leading-trailing, height);
    bottomLayer.backgroundColor = color.CGColor;
    [self.layer addSublayer:bottomLayer];
}

- (void)addBorders:(Borders)borders color:(UIColor*)color width:(CGFloat)width;
{
    if (borders & TopBorder)
    {
        [self addTopBorderWithColor:color height:width];
    }
    if (borders & LeftBorder)
    {
        [self addLeftBorderWithColor:color width:width];
    }
    if (borders & RightBorder)
    {
        [self addRightBorderWithColor:color width:width];
    }
    if (borders & BottomBorder)
    {
        [self addBottomBorderWithColor:color height:width];
    }
}
@end
