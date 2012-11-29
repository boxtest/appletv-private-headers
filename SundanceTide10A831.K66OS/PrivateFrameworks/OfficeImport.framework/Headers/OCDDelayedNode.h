/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@protocol OCDDelayedNodeContext;

@interface OCDDelayedNode : NSObject {
	id<OCDDelayedNodeContext> mDelayedContext;	// 4 = 0x4
	bool mLoaded;	// 8 = 0x8
}
@property(retain) id delayedContext;	// G=0x36c2a5c9; S=0x369e1509; converted property
@property(assign, getter=isLoaded) bool loaded;	// G=0x36a48111; S=0x36a7fb21; converted property
- (void)dealloc;	// 0x36a535e5
// converted property getter: - (id)delayedContext;	// 0x36c2a5c9
// converted property getter: - (bool)isLoaded;	// 0x36a48111
- (bool)load;	// 0x36a42c89
// converted property setter: - (void)setDelayedContext:(id)context;	// 0x369e1509
// converted property setter: - (void)setLoaded:(bool)loaded;	// 0x36a7fb21
@end
