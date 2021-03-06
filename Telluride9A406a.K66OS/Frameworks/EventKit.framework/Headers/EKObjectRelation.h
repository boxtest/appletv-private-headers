/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class EKObject, NSString;

__attribute__((visibility("hidden")))
@interface EKObjectRelation : NSObject {
@private
	EKObject *_owner;	// 4 = 0x4
	NSString *_relationName;	// 8 = 0x8
	BOOL _dirty;	// 12 = 0xc
	BOOL _loaded;	// 13 = 0xd
	NSString *_inverseName;	// 16 = 0x10
}
@property(readonly, assign, getter=isDirty) BOOL dirty;	// G=0x34542015; converted property
@property(readonly, assign, nonatomic) NSString *inverseName;	// G=0x3454b725; @synthesize=_inverseName
@property(readonly, assign, nonatomic) EKObject *owner;	// G=0x3454cacd; @synthesize=_owner
@property(readonly, assign, nonatomic) NSString *relationName;	// G=0x3454ca2d; @synthesize=_relationName
- (id)initWithOwner:(id)owner relationName:(id)name inverseRelationName:(id)name3;	// 0x345412a1
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x345aaf09
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x345aaf0d
- (id)committedValue;	// 0x345aaee1
- (void)dealloc;	// 0x34553379
- (void)didCommit;	// 0x34552999
// declared property getter: - (id)inverseName;	// 0x3454b725
// converted property getter: - (BOOL)isDirty;	// 0x34542015
- (BOOL)isWeak;	// 0x345aae81
// declared property getter: - (id)owner;	// 0x3454cacd
- (void)refresh;	// 0x345aaed9
- (void)relatedObjectDidChange;	// 0x3454cb01
// declared property getter: - (id)relationName;	// 0x3454ca2d
- (void)reset;	// 0x345aaeb9
- (void)rollback;	// 0x3454aa61
- (void)updatePersistentObject;	// 0x345aaeb5
- (BOOL)validate:(id *)validate;	// 0x345aaedd
@end

