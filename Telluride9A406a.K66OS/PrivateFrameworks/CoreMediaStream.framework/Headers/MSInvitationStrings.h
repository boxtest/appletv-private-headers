/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MSInvitationStrings : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_body;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *body;	// G=0x3389fa21; S=0x3389fa31; @synthesize=_body
@property(retain, nonatomic) NSString *title;	// G=0x3389f9ed; S=0x3389f9fd; @synthesize=_title
+ (id)invitationStringsWithTitle:(id)title body:(id)body;	// 0x3389f8d9
- (id)initWithTitle:(id)title body:(id)body;	// 0x3389f919
// declared property getter: - (id)body;	// 0x3389fa21
- (void)dealloc;	// 0x3389f98d
// declared property setter: - (void)setBody:(id)body;	// 0x3389fa31
// declared property setter: - (void)setTitle:(id)title;	// 0x3389f9fd
// declared property getter: - (id)title;	// 0x3389f9ed
@end
