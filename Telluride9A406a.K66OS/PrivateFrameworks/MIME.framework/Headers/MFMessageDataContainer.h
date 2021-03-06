/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface MFMessageDataContainer : NSObject {
	NSData *_data;	// 4 = 0x4
	BOOL _partial;	// 8 = 0x8
	BOOL _incomplete;	// 9 = 0x9
}
@property(readonly, retain) NSData *data;	// G=0x325aeb75; converted property
- (id)initWithData:(id)data;	// 0x325af5e1
- (id)initWithData:(id)data partial:(BOOL)partial incomplete:(BOOL)incomplete;	// 0x325af179
// converted property getter: - (id)data;	// 0x325aeb75
- (void)dealloc;	// 0x325af639
@end

