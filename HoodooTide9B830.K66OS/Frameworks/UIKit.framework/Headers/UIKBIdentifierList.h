/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, NSString, NSArray;

@interface UIKBIdentifierList : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_list;	// 8 = 0x8
	BOOL m_explicitlySpecified;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3034c8dd; 
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x3034c979; S=0x3034c989; @synthesize=m_explicitlySpecified
@property(readonly, assign, nonatomic) NSArray *list;	// G=0x3034c969; @synthesize=m_list
@property(copy, nonatomic) NSString *name;	// G=0x3034c935; S=0x3034c945; @synthesize=m_name
- (id)init;	// 0x3034c465
- (id)initWithCoder:(id)coder;	// 0x3034c529
- (void)addIdentifier:(id)identifier;	// 0x3034c8fd
- (id)copyWithZone:(NSZone *)zone;	// 0x3034c649
// declared property getter: - (unsigned)count;	// 0x3034c8dd
- (void)dealloc;	// 0x3034c4c9
- (id)description;	// 0x3034c6f9
- (void)encodeWithCoder:(id)coder;	// 0x3034c5c9
// declared property getter: - (BOOL)explicitlySpecified;	// 0x3034c979
// declared property getter: - (id)list;	// 0x3034c969
// declared property getter: - (id)name;	// 0x3034c935
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x3034c989
// declared property setter: - (void)setName:(id)name;	// 0x3034c945
@end
