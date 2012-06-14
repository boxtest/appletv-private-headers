/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (UISafeInstantiators)
- (id)_initWithUTF8String:(const char *)utf8String maxLength:(unsigned)length;	// 0x30088a51
@end

@interface NSString (UIStringDrawing)
+ (void)_popAscentRoundingEnabled;	// 0x3003bb61
+ (void)_popWordRoundingAllowed;	// 0x3003f439
+ (void)_pushAscentRoundingEnabled:(BOOL)enabled;	// 0x3003bb09
+ (void)_pushWordRoundingAllowed:(BOOL)allowed;	// 0x3003ea65
- (CGSize)_drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7;	// 0x300878fd
- (void)_makeNeededAdjustmentsToAttributes:(id)attributes andPoint:(CGPoint *)point forWidth:(float)width;	// 0x300a2199
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withAttributes:(id)attributes;	// 0x300a20b5
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font fontSize:(float)size lineBreakMode:(int)mode baselineAdjustment:(int)adjustment;	// 0x30045be1
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font fontSize:(float)size lineBreakMode:(int)mode baselineAdjustment:(int)adjustment includeEmoji:(BOOL)emoji;	// 0x30045c39
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x300299e5
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x3003f271
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x30029a35
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font minFontSize:(float)size actualFontSize:(float *)size5 lineBreakMode:(int)mode baselineAdjustment:(int)adjustment;	// 0x300b86c1
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font minFontSize:(float)size actualFontSize:(float *)size5 lineBreakMode:(int)mode baselineAdjustment:(int)adjustment includeEmoji:(BOOL)emoji;	// 0x300b871d
- (CGSize)drawAtPoint:(CGPoint)point withFont:(id)font;	// 0x300b8651
- (CGSize)drawInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x301d4551
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font;	// 0x301d44f5
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode;	// 0x300ea165
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment;	// 0x300ce3bd
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing;	// 0x30087841
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji;	// 0x30087899
- (id)securedStringIncludingLastCharacter:(BOOL)character;	// 0x301d4541
- (CGSize)sizeForWidth:(float)width withAttributes:(id)attributes;	// 0x300a19ed
- (CGSize)sizeInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x300ef9ad
- (CGSize)sizeWithFont:(id)font;	// 0x3001d451
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size;	// 0x300ab725
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size lineBreakMode:(int)mode;	// 0x301b5de1
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size lineBreakMode:(int)mode lineSpacing:(int)spacing;	// 0x300415f1
- (CGSize)sizeWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x30029881
- (CGSize)sizeWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x300298b9
- (CGSize)sizeWithFont:(id)font minFontSize:(float)size actualFontSize:(float *)size3 forWidth:(float)width lineBreakMode:(int)mode;	// 0x30045865
- (id)stringWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x3009fa59
@end

@interface NSString (UICalloutViewAdditions)
- (id)stringByStandardizingWhitespace;	// 0x30191a65
@end

@interface NSString (UIKBExtras)
+ (id)_stringWithUnichar:(unsigned long)unichar;	// 0x30035d81
+ (id)stringWithUnichar:(unsigned long)unichar;	// 0x30241329
- (BOOL)_containsSubstring:(id)substring;	// 0x30126441
- (unsigned)_editDistanceFrom:(id)from;	// 0x302410b1
- (BOOL)_endsSentence;	// 0x30240cf9
- (BOOL)_endsWord;	// 0x30159285
- (BOOL)_isDelete;	// 0x301339a5
- (BOOL)_isLeftAssociative;	// 0x30240d75
- (BOOL)_isNaturallyRTL;	// 0x30035a79
- (BOOL)_isNewlineOrReturn;	// 0x301339f1
- (BOOL)_isPlainSpace;	// 0x301592e9
- (BOOL)_isSpace;	// 0x30240e8d
- (BOOL)_isSpaceOrReturn;	// 0x30240e45
- (BOOL)_isTripledPunctuation;	// 0x30240dd9
- (BOOL)_looksLikeEmailAddress;	// 0x30240ed5
- (BOOL)_looksLikeNumberInput;	// 0x30240f29
- (BOOL)_looksLikeURL;	// 0x30241021
- (id)_stringByReplacingCharacter:(unsigned long)character withCharacter:(unsigned long)character2;	// 0x30035d25
- (id)_stringByReplacingCharactersInSet:(CFCharacterSetRef)set withCharacter:(unsigned long)character;	// 0x30093a61
- (id)_stringByTrimmingCharactersInCFCharacterSet:(CFCharacterSetRef)cfcharacterSet;	// 0x30145b3d
- (id)_stringByTrimmingLastCharacter;	// 0x300ff519
- (BOOL)containsSubstring:(id)substring;	// 0x30181a85
- (unsigned)editDistanceFrom:(id)from;	// 0x302414ad
- (BOOL)endsSentence;	// 0x30241375
- (BOOL)endsWord;	// 0x3024138d
- (BOOL)isDelete;	// 0x3024141d
- (BOOL)isLeftAssociative;	// 0x302413a5
- (BOOL)isNaturallyRTL;	// 0x30241495
- (BOOL)isNewlineOrReturn;	// 0x30241405
- (BOOL)isPlainSpace;	// 0x302413bd
- (BOOL)isSpace;	// 0x302413d5
- (BOOL)isSpaceOrReturn;	// 0x302413ed
- (BOOL)isTripledPunctuation;	// 0x30241435
- (BOOL)looksLikeEmailAddress;	// 0x3024144d
- (BOOL)looksLikeNumberInput;	// 0x30241465
- (BOOL)looksLikeURL;	// 0x3024147d
- (id)stringByReplacingCharacter:(unsigned long)character withCharacter:(unsigned long)character2;	// 0x30241365
- (id)stringByReplacingCharactersInSet:(CFCharacterSetRef)set withCharacter:(unsigned long)character;	// 0x30093a51
- (id)stringByTrimmingCharactersInCFCharacterSet:(CFCharacterSetRef)cfcharacterSet;	// 0x30241345
- (id)stringByTrimmingLastCharacter;	// 0x30241355
@end

@interface NSString (UIKitAdditions)
- (id)queryKeysAndValues;	// 0x30169c4d
- (id)unescapedQueryValue;	// 0x30245a91
@end

@interface NSString (UIFontPrivate)
- (id)stringByStrippingLeadingAndTrailingWhitespace;	// 0x30249d19
@end

@interface NSString (UIWebViewAdditions)
- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;	// 0x302d246d
- (id)_uikit_stringWithWritingDirection:(int)writingDirection asOverride:(BOOL)override;	// 0x302d2509
@end

@interface NSString (UIKBCandidateViewAdditions)
- (unsigned)countOfComposedCharacterSequences;	// 0x3031df11
@end
