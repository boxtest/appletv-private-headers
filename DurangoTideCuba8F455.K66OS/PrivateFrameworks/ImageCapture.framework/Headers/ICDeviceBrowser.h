/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject {
@private
	id _privateData;	// 4 = 0x4
}
@property(readonly, assign, getter=isBrowsing) BOOL browsing;	// G=0x332af019; 
@property(assign) id<ICDeviceBrowserDelegate> delegate;	// G=0x332af05d; S=0x332af03d; 
@property(readonly, assign) NSArray *devices;	// G=0x332aef75; 
- (id)init;	// 0x332af115
- (void)dealloc;	// 0x332af0c9
// declared property getter: - (id)delegate;	// 0x332af05d
// declared property getter: - (id)devices;	// 0x332aef75
- (void)finalize;	// 0x332af07d
- (id)internalDevices;	// 0x332aef55
// declared property getter: - (BOOL)isBrowsing;	// 0x332af019
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x332af03d
- (int)start;	// 0x332af2a9
- (void)stop;	// 0x332aefb5
@end
