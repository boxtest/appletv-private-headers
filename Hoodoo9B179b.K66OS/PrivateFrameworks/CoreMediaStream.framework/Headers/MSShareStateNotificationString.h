/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MSShareStateNotificationString : NSObject {
@private
	NSString *_sourcePersonID;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_body;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *body;	// G=0x36a67499; S=0x36a674a9; @synthesize=_body
@property(retain, nonatomic) NSString *sourcePersonID;	// G=0x36a67431; S=0x36a67441; @synthesize=_sourcePersonID
@property(retain, nonatomic) NSString *title;	// G=0x36a67465; S=0x36a67475; @synthesize=_title
+ (id)notificationStringsWithTitle:(id)title body:(id)body sourcePersonID:(id)anId;	// 0x36a672e5
- (id)initWithTitle:(id)title body:(id)body sourcePersonID:(id)anId;	// 0x36a6732d
// declared property getter: - (id)body;	// 0x36a67499
- (void)dealloc;	// 0x36a673bd
// declared property setter: - (void)setBody:(id)body;	// 0x36a674a9
// declared property setter: - (void)setSourcePersonID:(id)anId;	// 0x36a67441
// declared property setter: - (void)setTitle:(id)title;	// 0x36a67475
// declared property getter: - (id)sourcePersonID;	// 0x36a67431
// declared property getter: - (id)title;	// 0x36a67465
@end
