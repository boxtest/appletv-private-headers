/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CAContext, CALayer;

@interface CARenderer : NSObject {
@private
	CARendererPriv *_priv;	// 4 = 0x4
}
@property(assign) CGRect bounds;	// G=0x3086635d; S=0x3086633d; 
@property(retain) CAContext *context;	// G=0x308663c9; S=0x30866e9d; 
@property(assign) id delegate;	// G=0x308663dd; S=0x30866ee9; 
@property(retain) CALayer *layer;	// G=0x30866411; S=0x308663f1; 
+ (id)rendererWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x30866431
- (id)_initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x30866ad5
- (id)_initWithOptions:(id)options;	// 0x30866471
- (void)addUpdateRect:(CGRect)rect;	// 0x308666cd
- (void)beginFrameAtTime:(double)time timeStamp:(XXStruct_soD7RD *)stamp;	// 0x30866809
// declared property getter: - (CGRect)bounds;	// 0x3086635d
// declared property getter: - (id)context;	// 0x308663c9
- (void)dealloc;	// 0x30866a19
// declared property getter: - (id)delegate;	// 0x308663dd
- (void)endFrame;	// 0x30866595
- (BOOL)hasMissingContent;	// 0x308663a9
// declared property getter: - (id)layer;	// 0x30866411
- (double)nextFrameTime;	// 0x3086637d
- (void)render;	// 0x308665c9
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x3086633d
// declared property setter: - (void)setContext:(id)context;	// 0x30866e9d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30866ee9
// declared property setter: - (void)setLayer:(id)layer;	// 0x308663f1
- (CGRect)updateBounds;	// 0x3086673d
@end
