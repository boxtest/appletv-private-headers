/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBConditionalFormat : NSObject {
}
+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)xl;	// 0x31adf3b1
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)xl;	// 0x31adf3a5
+ (void)convertTokensToSharedTokens:(id)sharedTokens;	// 0x31adf3e9
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)ed;	// 0x318dc9ad
+ (int)convertXlConditionalFmtTypeEnumToED:(int)ed;	// 0x318dc991
+ (void)readXlConditionalFormat:(XlConditionalFormat *)format toEDConditionalFormatting:(id)edconditionalFormatting state:(id)state;	// 0x318dc3b1
+ (bool)validXlCf:(XlCf *)cf;	// 0x31adf47d
@end

