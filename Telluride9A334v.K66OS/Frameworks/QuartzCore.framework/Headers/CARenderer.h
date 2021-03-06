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
@property(assign) CGRect bounds;	// G=0x31b374e9; S=0x31b374c9; 
@property(retain) CAContext *context;	// G=0x31b37555; S=0x31b38029; 
@property(assign) id delegate;	// G=0x31b37569; S=0x31b38075; 
@property(retain) CALayer *layer;	// G=0x31b3759d; S=0x31b3757d; 
+ (id)rendererWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x31b375bd
- (id)_initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x31b37c61
- (id)_initWithOptions:(id)options;	// 0x31b375fd
- (void)addUpdateRect:(CGRect)rect;	// 0x31b37859
- (void)beginFrameAtTime:(double)time timeStamp:(XXStruct_soD7RD *)stamp;	// 0x31b37995
// declared property getter: - (CGRect)bounds;	// 0x31b374e9
// declared property getter: - (id)context;	// 0x31b37555
- (void)dealloc;	// 0x31b37ba5
// declared property getter: - (id)delegate;	// 0x31b37569
- (void)endFrame;	// 0x31b37721
- (BOOL)hasMissingContent;	// 0x31b37535
// declared property getter: - (id)layer;	// 0x31b3759d
- (double)nextFrameTime;	// 0x31b37509
- (void)render;	// 0x31b37755
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x31b374c9
// declared property setter: - (void)setContext:(id)context;	// 0x31b38029
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31b38075
// declared property setter: - (void)setLayer:(id)layer;	// 0x31b3757d
- (CGRect)updateBounds;	// 0x31b378c9
@end

