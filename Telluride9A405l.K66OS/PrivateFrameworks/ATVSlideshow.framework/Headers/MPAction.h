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

@class MCAction, NSString;
@protocol MPActionSupport;

@interface MPAction : NSObject <NSCoding, NSCopying> {
	NSObject<MPActionSupport> *_parentObject;	// 4 = 0x4
	MCAction *_action;	// 8 = 0x8
	NSObject *_targetObject;	// 12 = 0xc
	NSString *_uuid;	// 16 = 0x10
}
@property(retain) id parent;	// G=0x334659e9; S=0x33465b51; converted property
@property(retain, nonatomic) NSObject *targetObject;	// G=0x33465659; S=0x33465765; @synthesize=_targetObject
@property(readonly, assign) NSString *uuid;	// G=0x33465d39; @synthesize=_uuid
+ (id)action;	// 0x334654e9
- (id)init;	// 0x3346552d
- (id)initWithCoder:(id)coder;	// 0x334655b9
- (void)configureTarget;	// 0x33465bad
- (id)copyWithZone:(NSZone *)zone;	// 0x33465929
- (void)dealloc;	// 0x3346581d
- (void)encodeWithCoder:(id)coder;	// 0x334658b1
- (id)key;	// 0x3346599d
// converted property getter: - (id)parent;	// 0x334659e9
- (id)parentDocument;	// 0x334659f9
- (void)setAction:(id)action;	// 0x33465cd5
// converted property setter: - (void)setParent:(id)parent;	// 0x33465b51
// declared property setter: - (void)setTargetObject:(id)object;	// 0x33465765
// declared property getter: - (id)targetObject;	// 0x33465659
// declared property getter: - (id)uuid;	// 0x33465d39
@end

