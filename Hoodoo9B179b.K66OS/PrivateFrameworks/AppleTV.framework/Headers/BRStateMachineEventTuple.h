/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRStateMachineEventTuple : NSObject {
@private
	NSString *_event;	// 4 = 0x4
	id _context;	// 8 = 0x8
	NSDictionary *_userInfo;	// 12 = 0xc
}
@property(retain) id context;	// G=0x30373165; S=0x30373179; @synthesize=_context
@property(retain) NSString *event;	// G=0x3037312d; S=0x30373141; @synthesize=_event
@property(retain) NSDictionary *userInfo;	// G=0x3037319d; S=0x303731b1; @synthesize=_userInfo
// declared property getter: - (id)context;	// 0x30373165
- (void)dealloc;	// 0x303730c1
// declared property getter: - (id)event;	// 0x3037312d
// declared property setter: - (void)setContext:(id)context;	// 0x30373179
// declared property setter: - (void)setEvent:(id)event;	// 0x30373141
// declared property setter: - (void)setUserInfo:(id)info;	// 0x303731b1
// declared property getter: - (id)userInfo;	// 0x3037319d
@end

