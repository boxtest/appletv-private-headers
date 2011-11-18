/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class NSString, CIColor;

@interface UIColor : NSObject <NSCoding> {
@private
	NSString *_systemColorName;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CGColorRef CGColor;	// G=0x32ea6351; 
@property(readonly, assign, nonatomic) CIColor *CIColor;	// G=0x32ea63a1; 
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;	// G=0x32cbe89d; S=0x32cace51; 
+ (id)_systemColorForColor:(id)color withName:(id)name;	// 0x32d4929d
+ (id)_systemColorWithName:(id)name;	// 0x32cbf051
+ (id)allocWithZone:(NSZone *)zone;	// 0x32c79dd9
+ (id)blackColor;	// 0x32ca30a9
+ (id)blueColor;	// 0x32ea581d
+ (id)brownColor;	// 0x32ea5ba5
+ (id)clearColor;	// 0x32cde5e9
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x32ceade9
+ (id)colorWithCIColor:(id)cicolor;	// 0x32ea4f35
+ (id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x32ea4ed5
+ (id)colorWithPatternImage:(id)patternImage;	// 0x32d465a5
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x32ccea55
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x32c79d89
+ (id)cyanColor;	// 0x32ea58cd
+ (id)darkGrayColor;	// 0x32daa061
+ (id)darkTextColor;	// 0x32ea6555
+ (id)grayColor;	// 0x32cd8c2d
+ (id)greenColor;	// 0x32ea5769
+ (id)groupTableViewBackgroundColor;	// 0x32d49145
+ (id)infoTextOverPinStripeTextColor;	// 0x32e203a5
+ (void)initialize;	// 0x32cacde1
+ (id)insertionPointColor;	// 0x32cc0705
+ (id)lightGrayColor;	// 0x32d21469
+ (id)lightTextColor;	// 0x32ea64a5
+ (id)magentaColor;	// 0x32ea5a39
+ (id)noContentDarkGradientBackgroundColor;	// 0x32ea6861
+ (id)noContentLightGradientBackgroundColor;	// 0x32ea67e9
+ (id)orangeColor;	// 0x32d4bb85
+ (id)pinStripeColor;	// 0x32d491e5
+ (id)purpleColor;	// 0x32ea5aed
+ (id)redColor;	// 0x32ea56b5
+ (id)scrollViewTexturedBackgroundColor;	// 0x32ea6771
+ (id)sectionHeaderBackgroundColor;	// 0x32ea6019
+ (id)sectionHeaderBorderColor;	// 0x32ea61a5
+ (id)sectionHeaderOpaqueBackgroundColor;	// 0x32ea60e1
+ (id)sectionListBorderColor;	// 0x32d9e065
+ (id)selectionHighlightColor;	// 0x32cc0815
+ (id)tableBackgroundColor;	// 0x32cbe341
+ (id)tableCellBlueTextColor;	// 0x32da3079
+ (id)tableCellGrayTextColor;	// 0x32d4244d
+ (id)tableCellGroupedBackgroundColor;	// 0x32d4c0ad
+ (id)tableCellGroupedBackgroundColorLegacyWhite;	// 0x32ea5c69
+ (id)tableCellPlainBackgroundColor;	// 0x32cda601
+ (id)tableCellValue1BlueColor;	// 0x32d49595
+ (id)tableCellValue2BlueColor;	// 0x32e10031
+ (id)tableGroupedSeparatorLightColor;	// 0x32d49325
+ (id)tableGroupedTopShadowColor;	// 0x32ea5f61
+ (id)tableSelectionColor;	// 0x32da91bd
+ (id)tableSelectionGradientEndColor;	// 0x32ea5de1
+ (id)tableSelectionGradientStartColor;	// 0x32ea5d1d
+ (id)tableSeparatorDarkColor;	// 0x32d4de6d
+ (id)tableSeparatorLightColor;	// 0x32cbf075
+ (id)tableShadowColor;	// 0x32ea5ea5
+ (id)textFieldAtomBlueColor;	// 0x32df0175
+ (id)textFieldAtomPurpleColor;	// 0x32df02b9
+ (id)translucentPaperTextureColor;	// 0x32ea68d9
+ (id)underPageBackgroundColor;	// 0x32ea66b9
+ (id)viewFlipsideBackgroundColor;	// 0x32ea6601
+ (id)whiteColor;	// 0x32c868ad
+ (id)whitePaperTextureColor;	// 0x32ea6991
+ (id)yellowColor;	// 0x32ea5981
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x32d46621
- (id)initWithCIColor:(id)cicolor;	// 0x32ea4fd1
- (id)initWithCoder:(id)coder;	// 0x32ea5039
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x32ea4f81
- (id)initWithPatternImage:(id)patternImage;	// 0x32d465f1
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x32cead49
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x32cc3305
// declared property getter: - (CGColorRef)CGColor;	// 0x32ea6351
// declared property getter: - (id)CIColor;	// 0x32ea63a1
// declared property setter: - (void)_setSystemColorName:(id)name;	// 0x32cace51
// declared property getter: - (id)_systemColorName;	// 0x32cbe89d
- (float)alphaComponent;	// 0x32ea649d
- (CGColorRef)cgColor;	// 0x32d46775
- (Class)classForCoder;	// 0x32ea501d
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x32ea634d
- (void)dealloc;	// 0x32c7bde5
- (void)encodeWithCoder:(id)coder;	// 0x32ea53bd
- (BOOL)getHue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness alpha:(float *)alpha;	// 0x32ea6495
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x32ea6499
- (BOOL)getWhite:(float *)white alpha:(float *)alpha;	// 0x32ea6491
- (unsigned)hash;	// 0x32ea6441
- (BOOL)isEqual:(id)equal;	// 0x32ea63f1
- (BOOL)isPatternColor;	// 0x32ea64a1
- (void)set;	// 0x32ea6269
- (void)setFill;	// 0x32ea62b5
- (void)setStroke;	// 0x32ea6301
- (id)styleString;	// 0x32d46a51
@end

