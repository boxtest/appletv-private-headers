/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMapTable, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIAppearance : NSObject {
	Class _CustomizableClass;	// 4 = 0x4
	NSArray *_containerList;	// 8 = 0x8
	NSMutableArray *_appearanceInvocations;	// 12 = 0xc
	NSMapTable *_invocationSources;	// 16 = 0x10
	NSMutableDictionary *_resettableInvocations;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) Class _CustomizableClass;	// G=0x330136f9; @synthesize
@property(retain, nonatomic, setter=_setResettableInvocations:) NSMutableDictionary *_resettableInvocations;	// G=0x330136d9; S=0x330136e9; @synthesize
+ (void)_addWindow:(id)window forSource:(id)source;	// 0x33012f01
+ (id)_appearanceForClass:(Class)aClass withContainerList:(id)containerList;	// 0x32d4f759
+ (void)_applyInvocationsTo:(id)to window:(id)window;	// 0x32ccddd1
+ (void)_applyInvocationsTo:(id)to window:(id)window matchingSelector:(SEL)selector;	// 0x32ccddf5
+ (id)_currentAppearanceSource;	// 0x32d504d5
+ (BOOL)_hasCustomizationsForClass:(Class)aClass;	// 0x32ca8c01
+ (id)_pendingRecordInvocationsForSource:(id)source;	// 0x32d504e5
+ (id)_recorderForSource:(id)source;	// 0x33012fed
+ (id)_recordersExcludingSource:(id)source withWindow:(id)window;	// 0x330130ed
+ (void)_removeWindow:(id)window forSource:(id)source;	// 0x33012fb1
+ (id)_rootAppearancesNode;	// 0x32ca8c61
+ (void)_setCurrentAppearanceSource:(id)source;	// 0x33012ef1
+ (void)_setInvalidatesViewsOnAppearanceChange:(BOOL)change;	// 0x32ce8eed
+ (id)_windowsForSource:(id)source;	// 0x32d505b9
// declared property getter: - (Class)_CustomizableClass;	// 0x330136f9
- (id)_appearanceInvocations;	// 0x33012ee1
// declared property getter: - (id)_resettableInvocations;	// 0x330136d9
- (id)_resettableInvocationsCreateIfNecessary;	// 0x33012cf5
// declared property setter: - (void)_setResettableInvocations:(id)invocations;	// 0x330136e9
- (void)dealloc;	// 0x330134d5
- (void)forwardInvocation:(id)invocation;	// 0x32d4fb49
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32d4fa65
- (void)updateResettableSelectorsWithInvocation:(id)invocation removeSelector:(BOOL)selector;	// 0x33012d55
@end

