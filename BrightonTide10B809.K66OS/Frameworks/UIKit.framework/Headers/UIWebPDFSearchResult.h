/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface UIWebPDFSearchResult : NSObject {
	NSArray *rotationAngles;	// 4 = 0x4
	unsigned pageIndex;	// 8 = 0x8
	NSArray *strings;	// 12 = 0xc
	NSString *string;	// 16 = 0x10
	CGRect boundingBox;	// 20 = 0x14
	NSArray *rects;	// 36 = 0x24
}
@property(assign, nonatomic) CGRect boundingBox;	// G=0x32ed4191; S=0x32ed41b5; @synthesize
@property(assign, nonatomic) unsigned pageIndex;	// G=0x32ed4131; S=0x32ed4141; @synthesize
@property(retain, nonatomic) NSArray *rects;	// G=0x32ed41d1; S=0x32ed41e1; @synthesize
@property(retain, nonatomic) NSArray *rotationAngles;	// G=0x32ed4111; S=0x32ed4121; @synthesize
@property(retain, nonatomic) NSString *string;	// G=0x32ed4171; S=0x32ed4181; @synthesize
@property(retain, nonatomic) NSArray *strings;	// G=0x32ed4151; S=0x32ed4161; @synthesize
// declared property getter: - (CGRect)boundingBox;	// 0x32ed4191
// declared property getter: - (unsigned)pageIndex;	// 0x32ed4131
// declared property getter: - (id)rects;	// 0x32ed41d1
// declared property getter: - (id)rotationAngles;	// 0x32ed4111
// declared property setter: - (void)setBoundingBox:(CGRect)box;	// 0x32ed41b5
// declared property setter: - (void)setPageIndex:(unsigned)index;	// 0x32ed4141
// declared property setter: - (void)setRects:(id)rects;	// 0x32ed41e1
// declared property setter: - (void)setRotationAngles:(id)angles;	// 0x32ed4121
// declared property setter: - (void)setString:(id)string;	// 0x32ed4181
// declared property setter: - (void)setStrings:(id)strings;	// 0x32ed4161
// declared property getter: - (id)string;	// 0x32ed4171
// declared property getter: - (id)strings;	// 0x32ed4151
@end

