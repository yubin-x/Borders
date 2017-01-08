//
//  UIView+Border.h
//  Layout
//
//  Created by YUBIN on 2016/12/26.
//  Copyright © 2016年 LD. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_OPTIONS(NSInteger,Borders)
{
    TopBorder       = 1 << 0,   // 上边框
    LeftBorder      = 1 << 1,   // 左边框
    RightBorder     = 1 << 2,   // 右边框
    BottomBorder    = 1 << 3,   // 下边框
    AllBorders      = (TopBorder | LeftBorder | RightBorder | BottomBorder) // 上下左右边框
};

@interface UIView (Border)
/** @brief 给View的顶部添加内边框,边框两边与View对齐
 *
 * @param color 边框的颜色
 * @param height 边框的高度
 */
- (void)addTopBorderWithColor:(UIColor *)color height:(CGFloat)height;
/** 给View的左边添加内边框,边框顶部和底部与View对齐 
 *
 * @param color 边框的颜色
 * @param width 变宽的宽度
 */
- (void)addLeftBorderWithColor:(UIColor *)color width:(CGFloat)width;
/** 给View的右边添加内边框,边框顶部和底部与View对齐 
 *
 * @param color 边框的颜色
 * @param width 变宽的宽度
 */
- (void)addRightBorderWithColor:(UIColor *)color width:(CGFloat)width;
/**
 * 给View的底部添加内边框,边框两边与View对齐
 *
 * @param color 边框的颜色
 * @param height 底部边框的高度
 */
-(void)addBottomBorderWithColor:(UIColor *)color height:(CGFloat)height;
/** 给View的顶部添加内边框
 *
 * @param color 边框的颜色
 * @param height 边框的高度
 * @param leading 距离View左边的距离
 * @param trailing 距离View右边的距离
 */
- (void)addTopBorderWithColor:(UIColor *)color height:(CGFloat)height leading:(CGFloat)leading trailing:(CGFloat)trailing;
/** 给View的左边添加内边框
 *
 * @param color 边框的颜色
 * @param width 边框的高度
 * @param top 距离View顶部的距离
 * @param bottom 距离View底部的距离
 */
- (void)addLeftBorderWithColor:(UIColor *)color width:(CGFloat)width top:(CGFloat)top bottom:(CGFloat)bottom;
/** 给View的右边添加内边框
 *
 * @param color 边框的颜色
 * @param width 边框的高度
 * @param top 距离View顶部的距离
 * @param bottom 距离View底部的距离
 */
- (void)addRightBorderWithColor:(UIColor *)color width:(CGFloat)width top:(CGFloat)top bottom:(CGFloat)bottom;
/** 给View的底部添加内边框
 *
 * @param color 边框的颜色
 * @param height 边框的高度
 * @param leading 距离View左边的距离
 * @param trailing 距离View右边的距离
 */
- (void)addBottomBorderWithColor:(UIColor *)color height:(CGFloat)height leading:(CGFloat)leading trailing:(CGFloat)trailing;
/**
 *  @brief 给View添加内边框
 *
 *  @param borders 需要添加边框的方向(NS_OPTIONS)
 *  @param color 边框的颜色
 *  @param width 边框的宽度
 */
- (void)addBorders:(Borders)borders color:(UIColor*)color width:(CGFloat)width;

@end
