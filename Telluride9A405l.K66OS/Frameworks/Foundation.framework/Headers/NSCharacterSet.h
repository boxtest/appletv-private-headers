/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"


@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (id)alphanumericCharacterSet;	// 0x302b0671
+ (id)capitalizedLetterCharacterSet;	// 0x302b0691
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x302b0729
+ (id)characterSetWithCharactersInString:(id)string;	// 0x30277631
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x302b06a9
+ (id)characterSetWithRange:(NSRange)range;	// 0x302b06f9
+ (id)controlCharacterSet;	// 0x30275265
+ (id)decimalDigitCharacterSet;	// 0x30276b25
+ (id)decomposableCharacterSet;	// 0x302b0681
+ (id)illegalCharacterSet;	// 0x302b0699
+ (void)initialize;	// 0x30275211
+ (id)letterCharacterSet;	// 0x302b0659
+ (id)lowercaseLetterCharacterSet;	// 0x302b0661
+ (id)newlineCharacterSet;	// 0x302997ed
+ (id)nonBaseCharacterSet;	// 0x302b0679
+ (id)punctuationCharacterSet;	// 0x302b0689
+ (id)symbolCharacterSet;	// 0x302b06a1
+ (id)uppercaseLetterCharacterSet;	// 0x302b0669
+ (id)whitespaceAndNewlineCharacterSet;	// 0x3027526d
+ (id)whitespaceCharacterSet;	// 0x30276b1d
- (id)init;	// 0x302a1991
- (id)initWithCoder:(id)coder;	// 0x302b0b5d
- (unsigned long)_cfTypeID;	// 0x302b05b1
- (CFCharacterSetRef)_expandedCFCharacterSet;	// 0x302b05b5
- (id)_retainedBitmapRepresentation;	// 0x302b0dd9
- (id)bitmapRepresentation;	// 0x302b09d1
- (BOOL)characterIsMember:(unsigned short)member;	// 0x302b0899
- (id)copyWithZone:(NSZone *)zone;	// 0x302b077d
- (unsigned)count;	// 0x302b0831
- (void)encodeWithCoder:(id)coder;	// 0x302b0ac9
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x302b0931
- (unsigned)hash;	// 0x302b0755
- (id)invertedSet;	// 0x302b078d
- (BOOL)isEmpty;	// 0x302b07d9
- (BOOL)isEqual:(id)equal;	// 0x302b0971
- (BOOL)isMutable;	// 0x302b0891
- (BOOL)isSupersetOfSet:(id)set;	// 0x302b08f1
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x302b08d9
- (void)makeImmutable;	// 0x302b0895
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x302b0a89
@end
