/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategory : NSObject {
@private
	NSString *_name;	// 4 = 0x4
	NSArray *_emoji;	// 8 = 0x8
	int _lastViewedPage;	// 12 = 0xc
}
@property(retain) NSArray *emoji;	// G=0x33c0ba29; S=0x33c0ba3d; @synthesize=_emoji
@property(assign) int lastViewedPage;	// G=0x33c0ba61; S=0x33c0ba71; @synthesize=_lastViewedPage
@property(retain) NSString *name;	// G=0x33c0b9f1; S=0x33c0ba05; @synthesize=_name
- (void)dealloc;	// 0x33c0b999
// declared property getter: - (id)emoji;	// 0x33c0ba29
// declared property getter: - (int)lastViewedPage;	// 0x33c0ba61
// declared property getter: - (id)name;	// 0x33c0b9f1
// declared property setter: - (void)setEmoji:(id)emoji;	// 0x33c0ba3d
// declared property setter: - (void)setLastViewedPage:(int)page;	// 0x33c0ba71
// declared property setter: - (void)setName:(id)name;	// 0x33c0ba05
@end
