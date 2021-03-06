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
	EAGLContextPrivate *_private;	// 4 = 0x4
}
@property(readonly, assign) unsigned API;	// G=0x332c388d; 
@property(readonly, assign) EAGLSharegroup *sharegroup;	// G=0x332c38a1; 
+ (id)currentContext;	// 0x332c3879
+ (BOOL)setCurrentContext:(id)context;	// 0x332c3f45
- (id)initWithAPI:(unsigned)api;	// 0x332c3ad1
- (id)initWithAPI:(unsigned)api properties:(id)properties;	// 0x332c3c25
- (id)initWithAPI:(unsigned)api sharedWithCompute:(BOOL)compute;	// 0x332c3ae5
- (id)initWithAPI:(unsigned)api sharegroup:(id)sharegroup;	// 0x332c3b95
// declared property getter: - (unsigned)API;	// 0x332c388d
- (EAGLMacroContextRef)GetMacroContextPrivate;	// 0x332c3abd
- (BOOL)attachImage:(unsigned)image toCoreSurface:(IOSurfaceRef)coreSurface invertedRender:(BOOL)render;	// 0x332c4155
- (void)dealloc;	// 0x332c4621
- (unsigned)getParameter:(unsigned)parameter to:(int *)to;	// 0x332c3a35
- (BOOL)presentRenderbuffer:(unsigned)renderbuffer;	// 0x332c38b5
- (BOOL)renderbufferStorage:(unsigned)storage fromDrawable:(id)drawable;	// 0x332c4401
- (void)sendNotification:(unsigned)notification forTransaction:(unsigned)transaction onLayer:(unsigned)layer;	// 0x332c391d
- (unsigned)setParameter:(unsigned)parameter to:(int *)to;	// 0x332c39ad
// declared property getter: - (id)sharegroup;	// 0x332c38a1
- (void)swapNotification:(IOMobileFramebufferRef)notification forTransaction:(unsigned)transaction onLayer:(unsigned)layer;	// 0x332c3fe1
- (BOOL)texImageIOSurface:(IOSurfaceRef)surface target:(unsigned)target internalFormat:(unsigned)format width:(unsigned)width height:(unsigned)height format:(unsigned)format6 type:(unsigned)type plane:(unsigned)plane invert:(BOOL)invert;	// 0x332c409d
@end

