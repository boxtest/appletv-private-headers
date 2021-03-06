/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSURL.h> // Unknown library


@interface NSURL (OCPURLAdditions)
+ (id)URLWithPackagePart:(id)packagePart;	// 0x36fd6521
- (id)initWithPackagePart:(id)packagePart;	// 0x36fd655d
- (BOOL)isInternalToPackage;	// 0x36fd66c9
@end

@interface NSURL (SFUtilityAdditions)
+ (id)filePathURLWithEscapes:(id)escapes;	// 0x371c039d
+ (id)improperlyEscapedString:(id)string;	// 0x371c01d9
+ (id)properlyEscapedString:(id)string;	// 0x371c019d
+ (id)relativeURLWithEscapes:(id)escapes;	// 0x371c0345
- (BOOL)isRelative;	// 0x371c0449
@end

