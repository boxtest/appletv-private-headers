/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@protocol DOMEventTarget;

@interface DOMGestureEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altKey;	// G=0x30d1c76d; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x30d1c705; 
@property(readonly, assign) BOOL metaKey;	// G=0x30d1c7a1; 
@property(readonly, assign) float rotation;	// G=0x30d1c6d9; 
@property(readonly, assign) float scale;	// G=0x30d1c6ad; 
@property(readonly, assign) BOOL shiftKey;	// G=0x30d1c739; 
@property(readonly, assign) id<DOMEventTarget> target;	// G=0x30d1c5a9; 
- (void)initGestureEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail screenX:(int)x screenY:(int)y clientX:(int)x8 clientY:(int)y9 ctrlKey:(BOOL)key altKey:(BOOL)key11 shiftKey:(BOOL)key12 metaKey:(BOOL)key13 target:(id)target scale:(float)scale rotation:(float)rotation;	// 0x30d1c7d5
// declared property getter: - (BOOL)altKey;	// 0x30d1c76d
// declared property getter: - (BOOL)ctrlKey;	// 0x30d1c705
// declared property getter: - (BOOL)metaKey;	// 0x30d1c7a1
// declared property getter: - (float)rotation;	// 0x30d1c6d9
// declared property getter: - (float)scale;	// 0x30d1c6ad
// declared property getter: - (BOOL)shiftKey;	// 0x30d1c739
// declared property getter: - (id)target;	// 0x30d1c5a9
@end
