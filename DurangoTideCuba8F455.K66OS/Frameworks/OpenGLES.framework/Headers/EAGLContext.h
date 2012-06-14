/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

#import "OpenGLES-Structs.h"
#import <NSObject.h> // Unknown library

@class EAGLSharegroup;

@interface EAGLContext : NSObject {
@private
	EAGLContextPrivate *_private;	// 4 = 0x4
}
@property(readonly, assign) unsigned API;	// G=0x3111b2b9; 
@property(readonly, assign) EAGLSharegroup *sharegroup;	// G=0x3111b2c9; 
+ (id)currentContext;	// 0x3111bf01
+ (BOOL)setCurrentContext:(id)context;	// 0x3111bea9
- (id)initWithAPI:(unsigned)api;	// 0x3111b51d
- (id)initWithAPI:(unsigned)api properties:(id)properties;	// 0x3111b535
- (id)initWithAPI:(unsigned)api sharegroup:(id)sharegroup;	// 0x3111b49d
// declared property getter: - (unsigned)API;	// 0x3111b2b9
- (BOOL)attachImage:(unsigned)image toCoreSurface:(IOSurfaceRef)coreSurface invertedRender:(BOOL)render;	// 0x3111badd
- (void)dealloc;	// 0x3111b7e5
- (unsigned)getParameter:(unsigned)parameter to:(int *)to;	// 0x3111b42d
- (BOOL)presentRenderbuffer:(unsigned)renderbuffer;	// 0x3111b2d9
- (BOOL)renderbufferStorage:(unsigned)storage fromDrawable:(id)drawable;	// 0x3111b8d1
- (void)sendNotification:(unsigned)notification forTransaction:(unsigned)transaction onLayer:(unsigned)layer;	// 0x3111b335
- (unsigned)setParameter:(unsigned)parameter to:(int *)to;	// 0x3111b3bd
// declared property getter: - (id)sharegroup;	// 0x3111b2c9
- (void)swapNotification:(IOMobileFramebufferRef)notification forTransaction:(unsigned)transaction onLayer:(unsigned)layer;	// 0x3111be05
- (BOOL)texImageIOSurface:(IOSurfaceRef)surface target:(unsigned)target internalFormat:(unsigned)format width:(unsigned)width height:(unsigned)height format:(unsigned)format6 type:(unsigned)type plane:(unsigned)plane invert:(BOOL)invert;	// 0x3111bd31
@end
