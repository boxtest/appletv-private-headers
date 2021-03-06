/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSMutableArray;

@interface GQNumberFormatter : NSObject {
	CFLocaleRef mLocale;	// 4 = 0x4
	CFArrayRef mDecimalFormatters;	// 8 = 0x8
	CFArrayRef mCurrencyFormatters;	// 12 = 0xc
	CFArrayRef mPercentageFormatters;	// 16 = 0x10
	CFArrayRef mScientificFormatters;	// 20 = 0x14
	CFNumberFormatterRef mFractionFormatter;	// 24 = 0x18
	NSMutableDictionary *mCurrencyCodeToSymbolMap;	// 28 = 0x1c
	NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;	// 32 = 0x20
	NSString *mCurrencyString;	// 36 = 0x24
	NSString *mPercentageString;	// 40 = 0x28
	NSString *mScientificString;	// 44 = 0x2c
	NSString *mDecimalString;	// 48 = 0x30
	NSString *mPercentSymbol;	// 52 = 0x34
	NSMutableArray *mTransformedDecimalStrings;	// 56 = 0x38
	NSMutableArray *mTransformedCurrencyStrings;	// 60 = 0x3c
	NSMutableArray *mTransformedPercentageStrings;	// 64 = 0x40
	NSMutableArray *mTransformedScientificStrings;	// 68 = 0x44
	CFStringRef mAdditionalCurrencyCode;	// 72 = 0x48
	CFArrayRef mAdditionalCurrencyCodeFormatters;	// 76 = 0x4c
}
+ (id)availableCurrencyCodes;	// 0x350eacd1
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x350ead1d
+ (id)currentLocaleCurrencyCode;	// 0x350ead7d
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;	// 0x350ead4d
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x350eae39
+ (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x350eae05
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x350eaced
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x350eaac9
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x350ea809
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x350eb0a9
+ (id)localizedPercentSymbol;	// 0x350eae69
+ (id)numberFormatStringSpecialSymbols;	// 0x350eada9
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x350ea775
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x350ea7c1
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x350ea719
+ (id)userVisibleCurrencyCodes;	// 0x350eae95
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x350eb121
- (BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code5;	// 0x350eb6f1
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x350ebeb5
- (id)currentLocaleCurrencyCode;	// 0x350ec045
- (void)dealloc;	// 0x350eb4e5
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x350eb6b5
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x350ec0e5
- (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x350ec08d
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x350ebe7d
- (BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code successfulString:(const CFStringRef *)string3;	// 0x350ebcd1
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x350eb8a1
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;	// 0x350ebfb5
- (id)localizedPercentSymbol;	// 0x350ec129
- (void)numberPreferencesChanged:(id)changed;	// 0x350eb695
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x350eb825
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x350eb861
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x350ebc39
@end

