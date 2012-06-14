/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MPTextInternal, MCText;
@protocol MPEffectSupport;

@interface MPText : NSObject <NSCoding, NSCopying> {
@private
	MCText *_text;	// 4 = 0x4
	MPTextInternal *_internal;	// 8 = 0x8
	NSObject<MPEffectSupport> *_parent;	// 12 = 0xc
}
@property(retain) id attributedString;	// G=0x342f034d; S=0x342f036d; converted property
@property(retain) id plainString;	// G=0x342f14cd; S=0x342f1505; converted property
@property(retain) MCText *text;	// G=0x342f0f4d; S=0x342f19b1; converted property
+ (id)textWithAttributedString:(id)attributedString;	// 0x342eff89
- (id)init;	// 0x342f0005
- (id)initWithAttributedString:(id)attributedString;	// 0x342effc5
- (id)initWithCoder:(id)coder;	// 0x342f0189
- (id)action;	// 0x342f18ad
// converted property getter: - (id)attributedString;	// 0x342f034d
- (void)checkForMaxFontSize;	// 0x342f1f7d
- (void)checkForPlacesLabel;	// 0x342f1ab1
- (id)convertFontSizeForString:(id)string toRelative:(BOOL)relative;	// 0x342f15ad
- (void)copyStruct:(id)aStruct;	// 0x342f192d
- (id)copyWithZone:(NSZone *)zone;	// 0x342f007d
- (void)dealloc;	// 0x342f02d9
- (id)defaultString;	// 0x342f0fc5
- (id)description;	// 0x342f0261
- (double)displayDuration;	// 0x342f0e91
- (double)displayStartTime;	// 0x342f0ca1
- (double)displayTime;	// 0x342f0aa9
- (void)dump;	// 0x342f0f5d
- (void)encodeWithCoder:(id)coder;	// 0x342f00e1
- (id)fullDebugLog;	// 0x342f0f85
- (int)index;	// 0x342f0a41
- (BOOL)isOriginal;	// 0x342f10f5
- (float)maxFontSize;	// 0x342f105d
- (id)nearestPlug;	// 0x342f1989
- (id)parentEffect;	// 0x342f071d
// converted property getter: - (id)plainString;	// 0x342f14cd
// converted property setter: - (void)setAttributedString:(id)string;	// 0x342f036d
- (void)setParent:(id)parent;	// 0x342f1a41
// converted property setter: - (void)setPlainString:(id)string;	// 0x342f1505
// converted property setter: - (void)setText:(id)text;	// 0x342f19b1
- (id)subtitleSlide;	// 0x342f072d
// converted property getter: - (id)text;	// 0x342f0f4d
@end
