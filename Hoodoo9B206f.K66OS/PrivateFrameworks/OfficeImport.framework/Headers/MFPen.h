/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFObject.h"
#import <NSObject.h> // Unknown library

@class NSColorStub;

__attribute__((visibility("hidden")))
@interface MFPen : NSObject <MFObject> {
@private
	int m_penStyle;	// 4 = 0x4
	int m_penWidth;	// 8 = 0x8
	NSColorStub *m_colour;	// 12 = 0xc
	double *m_userStyleArray;	// 16 = 0x10
}
+ (id)pen;	// 0x344f4835
+ (id)penWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double *)array;	// 0x3463c349
- (id)init;	// 0x344f486d
- (id)initWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double *)array;	// 0x3440ab65
- (void)dealloc;	// 0x34405e11
- (id)getColor;	// 0x3440f3cd
- (int)getStyle;	// 0x3440f481
- (long)getWidth;	// 0x3463c339
- (int)selectInto:(id)into;	// 0x3440dfdd
@end

