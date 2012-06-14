/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "TSUNumberFormatting.h"
#import <NSObject.h> // Unknown library

@class NSIndexSet, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface TSUNumberFormat : NSObject <TSUNumberFormatting> {
@private
	int mValueType;	// 4 = 0x4
	NSString *mFormatString;	// 8 = 0x8
	unsigned short mDecimalPlaces;	// 12 = 0xc
	NSString *mCurrencyCode;	// 16 = 0x10
	BOOL mUseAccountingStyle;	// 20 = 0x14
	int mNegativeStyle;	// 24 = 0x18
	BOOL mShowThousandsSeparator;	// 28 = 0x1c
	int mFractionAccuracy;	// 32 = 0x20
	BOOL mFormatStringRequiresSuppressionOfMinusSign;	// 36 = 0x24
	BOOL mUseScientificFormattingAutomatically;	// 37 = 0x25
	BOOL mIgnoreDecimalPlacesForZeroValue;	// 38 = 0x26
	NSString *mPrefixString;	// 40 = 0x28
	NSString *mSuffixString;	// 44 = 0x2c
	unsigned char mBase;	// 48 = 0x30
	unsigned short mBasePlaces;	// 50 = 0x32
	BOOL mBaseUseMinusSign;	// 52 = 0x34
	BOOL mIsCustom;	// 53 = 0x35
	double mScaleFactor;	// 56 = 0x38
	BOOL mFormatStringContainsTabCharacter;	// 64 = 0x40
	BOOL mFormatContainsSpecialTokens;	// 65 = 0x41
	BOOL mFormatContainsIntegerToken;	// 66 = 0x42
	unsigned char mNumberOfHashDecimalPlaceholders;	// 67 = 0x43
	unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;	// 68 = 0x44
	BOOL mRequiresFractionReplacement;	// 69 = 0x45
	NSArray *mInterstitialStrings;	// 72 = 0x48
	NSIndexSet *mInterstitialStringInsertionIndexes;	// 76 = 0x4c
	unsigned short mIndexFromRightOfLastDigitPlaceholder;	// 80 = 0x50
	BOOL mIsTextFormat;	// 82 = 0x52
	unsigned char mMinimumIntegerWidth;	// 83 = 0x53
	unsigned char mDecimalWidth;	// 84 = 0x54
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;	// 85 = 0x55
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;	// 86 = 0x56
	NSString *mFormatName;	// 88 = 0x58
}
@property(retain) id formatName;	// G=0x30ecdbc9; S=0x30ecf4fd; converted property
@property(assign) BOOL ignoreDecimalPlacesForZeroValue;	// G=0x30ecdd59; S=0x30ecdd69; converted property
@property(assign) BOOL useScientificFormattingAutomatically;	// G=0x30ecdd39; S=0x30ecdd49; converted property
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x30ecfea1
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x30ecfdc9
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom formatName:(id)name;	// 0x30ecfc81
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor isCustom:(BOOL)custom formatName:(id)name;	// 0x30ecfd35
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x30ecfe3d
- (id)init;	// 0x30ecdde9
- (id)initCustomFormatWithFormatString:(id)formatString currencyCode:(id)code showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x30ecde21
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x30ecdea1
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x30ecdf01
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x30ed0bf5
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x30ecdfa9
- (unsigned short)base;	// 0x30ecdce5
- (unsigned short)basePlaces;	// 0x30ecdcf5
- (id)baseStringFromDouble:(double)aDouble;	// 0x30ed1461
- (BOOL)baseUseMinusSign;	// 0x30ecdd05
- (BOOL)canFormatText;	// 0x30ecdcc5
- (id)chartLabelStringFromDouble:(double)aDouble;	// 0x30ecf675
- (id)chartLabelStringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x30ecf785
- (id)chartLabelStringNofixFromDouble:(double)aDouble;	// 0x30ecf605
- (id)copyWithZone:(NSZone *)zone;	// 0x30ecff05
- (id)currencyCode;	// 0x30ecdc4d
- (BOOL)customFormatShouldAutoInsertPercentSymbol;	// 0x30ecf53d
- (id)customNumberFormatTokens;	// 0x30ed086d
- (void)dealloc;	// 0x30ed0af9
- (unsigned short)decimalPlaces;	// 0x30ecdbf9
- (id)description;	// 0x30ed0121
// converted property getter: - (id)formatName;	// 0x30ecdbc9
- (id)formatString;	// 0x30ecdc3d
- (int)fractionAccuracy;	// 0x30ecdc7d
- (id)fractionStringFromDouble:(double)aDouble;	// 0x30ed1681
- (BOOL)hasValidDecimalPlaces;	// 0x30ecdd15
- (unsigned)hash;	// 0x30ed066d
// converted property getter: - (BOOL)ignoreDecimalPlacesForZeroValue;	// 0x30ecdd59
- (BOOL)isCustom;	// 0x30ecdbd9
- (BOOL)isEqual:(id)equal;	// 0x30ed02f9
- (BOOL)isEquivalent:(id)equivalent;	// 0x30ecfb0d
- (BOOL)isTextFormat;	// 0x30ecdcb5
- (int)negativeStyle;	// 0x30ecdc5d
- (id)numberFormatByIncrementingDecimalPlaces:(short)places;	// 0x30ece675
- (id)numberFormatBySettingBase:(unsigned short)base;	// 0x30ecf085
- (id)numberFormatBySettingBasePlaces:(unsigned short)places;	// 0x30ecf205
- (id)numberFormatBySettingBaseRepresentNegativeWithMinus:(BOOL)minus;	// 0x30ecf37d
- (id)numberFormatBySettingCurrencyCode:(id)code;	// 0x30ece7bd
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places;	// 0x30ece215
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places andNegativeStyle:(int)style;	// 0x30eceab1
- (id)numberFormatBySettingFractionAccuracy:(int)accuracy;	// 0x30eced95
- (id)numberFormatBySettingNegativeStyle:(int)style;	// 0x30ece939
- (id)numberFormatBySettingPrefixString:(id)string;	// 0x30ece38d
- (id)numberFormatBySettingShowThousandsSeparator:(BOOL)separator;	// 0x30ecec1d
- (id)numberFormatBySettingSuffixString:(id)string;	// 0x30ece501
- (id)numberFormatBySettingUseAccountingStyle:(BOOL)style;	// 0x30ecef09
- (id)numberFormatBySettingValueType:(int)type;	// 0x30ece051
- (id)prefixString;	// 0x30ecdc1d
- (BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)aDouble;	// 0x30ecddbd
- (double)scaleFactor;	// 0x30ecdc9d
// converted property setter: - (void)setFormatName:(id)name;	// 0x30ecf4fd
// converted property setter: - (void)setIgnoreDecimalPlacesForZeroValue:(BOOL)zeroValue;	// 0x30ecdd69
// converted property setter: - (void)setUseScientificFormattingAutomatically:(BOOL)automatically;	// 0x30ecdd49
- (BOOL)showThousandsSeparator;	// 0x30ecdc6d
- (id)stringFromDouble:(double)aDouble;	// 0x30ecf8d9
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3;	// 0x30ecf9b1
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3 forceSuppressMinusSign:(BOOL)sign;	// 0x30ed0885
- (id)stringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x30ecf899
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places;	// 0x30ecf965
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places forceSuppressMinusSign:(BOOL)sign;	// 0x30ecf919
- (id)stringFromString:(id)string;	// 0x30ecf9dd
- (id)suffixString;	// 0x30ecdc2d
// converted property getter: - (BOOL)useScientificFormattingAutomatically;	// 0x30ecdd39
- (BOOL)usesAccountingStyle;	// 0x30ecdc8d
- (BOOL)usesTabs;	// 0x30ecdd79
- (BOOL)usesTextFormatForValue:(double)value;	// 0x30ecdcd5
- (int)valueType;	// 0x30ecdbe9
@end
