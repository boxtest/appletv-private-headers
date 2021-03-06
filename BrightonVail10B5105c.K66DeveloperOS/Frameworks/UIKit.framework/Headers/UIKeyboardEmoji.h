/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmoji : NSObject {
	NSString *emojiString;	// 4 = 0x4
	unsigned short _glyph;	// 8 = 0x8
}
@property(retain) NSString *emojiString;	// G=0x347dd4d5; S=0x347dd4e9; @synthesize
@property(assign) unsigned short glyph;	// G=0x347dd4f9; S=0x347dd511; @synthesize=_glyph
@property(readonly, assign) NSString *key;	// G=0x347dd489; 
+ (id)emojiWithString:(id)string;	// 0x347dd3e9
- (id)initWithString:(id)string;	// 0x347dd38d
- (void)dealloc;	// 0x347dd431
// declared property getter: - (id)emojiString;	// 0x347dd4d5
// declared property getter: - (unsigned short)glyph;	// 0x347dd4f9
- (BOOL)isEqual:(id)equal;	// 0x347dd499
// declared property getter: - (id)key;	// 0x347dd489
// declared property setter: - (void)setEmojiString:(id)string;	// 0x347dd4e9
// declared property setter: - (void)setGlyph:(unsigned short)glyph;	// 0x347dd511
@end

