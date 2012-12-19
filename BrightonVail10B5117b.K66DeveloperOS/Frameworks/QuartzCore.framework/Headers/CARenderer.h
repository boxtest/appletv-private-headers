/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CALayer, CAContext;
@protocol CARendererDelegate;

@interface CARenderer : NSObject {
	CARendererPriv *_priv;	// 4 = 0x4
}
@property(assign) CGRect bounds;	// G=0x32b8ffbd; S=0x32b8ff9d; 
@property(retain) CAContext *context;	// G=0x32b90509; S=0x32b9051d; 
@property(assign) id<CARendererDelegate> delegate;	// G=0x32b90605; S=0x32b90619; 
@property(retain) CALayer *layer;	// G=0x32b8ff7d; S=0x32b8ff5d; 
+ (id)rendererWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x32b8fdad
- (id)_initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x32b8fbbd
- (id)_initWithOptions:(id)options;	// 0x32b8fab9
- (void)addUpdateRect:(CGRect)rect;	// 0x32b90291
- (void)beginFrameAtTime:(double)time timeStamp:(XXStruct_soD7RD *)stamp;	// 0x32b8ffe1
// declared property getter: - (CGRect)bounds;	// 0x32b8ffbd
// declared property getter: - (id)context;	// 0x32b90509
- (void)dealloc;	// 0x32b8fded
// declared property getter: - (id)delegate;	// 0x32b90605
- (void)endFrame;	// 0x32b90445
- (BOOL)hasMissingContent;	// 0x32b90321
// declared property getter: - (id)layer;	// 0x32b8ff7d
- (double)nextFrameTime;	// 0x32b902f1
- (void)render;	// 0x32b90341
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x32b8ff9d
// declared property setter: - (void)setContext:(id)context;	// 0x32b9051d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32b90619
// declared property setter: - (void)setLayer:(id)layer;	// 0x32b8ff5d
- (CGRect)updateBounds;	// 0x32b901d9
@end
