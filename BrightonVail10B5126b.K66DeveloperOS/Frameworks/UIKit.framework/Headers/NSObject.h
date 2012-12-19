/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (UINibLoadingActionEstablishing)
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x32d6bf19
@end

@interface NSObject (UINibLoadingAdditions)
- (void)awakeFromNib;	// 0x32c865f9
@end

@interface NSObject (UIAccessibility)
@property(assign, nonatomic) CGPoint accessibilityActivationPoint;	// G=0x32bc5a45; S=0x32d80de9; @dynamic
@property(retain) id accessibilityContainer;	// G=0x32bc5781; S=0x32bc52bd; converted property
@property(assign, nonatomic) BOOL accessibilityElementsHidden;	// G=0x32c0ad39; S=0x32bd03a5; @dynamic
@property(assign, nonatomic) CGRect accessibilityFrame;	// G=0x32d80d61; S=0x32bcc445; @dynamic
@property(copy, nonatomic) NSString *accessibilityHint;	// G=0x32bc5439; S=0x32bcc499; @dynamic
@property(retain) id accessibilityIdentifier;	// G=0x32bc5761; S=0x32bc5649; converted property
@property(copy, nonatomic) NSString *accessibilityLabel;	// G=0x32bc528d; S=0x32bc565d; @dynamic
@property(retain, nonatomic) NSString *accessibilityLanguage;	// G=0x32c0ab5d; S=0x32cac881; @dynamic
@property(assign, nonatomic) unsigned long long accessibilityTraits;	// G=0x32bc5899; S=0x32bcc409; @dynamic
@property(copy, nonatomic) NSString *accessibilityValue;	// G=0x32bc5449; S=0x32bcc3f1; @dynamic
@property(assign, nonatomic) BOOL accessibilityViewIsModal;	// G=0x32d80db1; S=0x32c4689d; @dynamic
@property(assign, nonatomic) BOOL isAccessibilityElement;	// G=0x32bc5871; S=0x32bcc175; @dynamic
@property(assign, nonatomic) BOOL shouldGroupAccessibilityChildren;	// G=0x32bc58c1; S=0x32ca5859; @dynamic
// declared property getter: - (CGPoint)accessibilityActivationPoint;	// 0x32bc5a45
// converted property getter: - (id)accessibilityContainer;	// 0x32bc5781
// declared property getter: - (BOOL)accessibilityElementsHidden;	// 0x32c0ad39
// declared property getter: - (CGRect)accessibilityFrame;	// 0x32d80d61
// declared property getter: - (id)accessibilityHint;	// 0x32bc5439
// converted property getter: - (id)accessibilityIdentifier;	// 0x32bc5761
// declared property getter: - (id)accessibilityLabel;	// 0x32bc528d
// declared property getter: - (id)accessibilityLanguage;	// 0x32c0ab5d
// declared property getter: - (unsigned long long)accessibilityTraits;	// 0x32bc5899
// declared property getter: - (id)accessibilityValue;	// 0x32bc5449
// declared property getter: - (BOOL)accessibilityViewIsModal;	// 0x32d80db1
// declared property getter: - (BOOL)isAccessibilityElement;	// 0x32bc5871
// declared property setter: - (void)setAccessibilityActivationPoint:(CGPoint)point;	// 0x32d80de9
// converted property setter: - (void)setAccessibilityContainer:(id)container;	// 0x32bc52bd
// declared property setter: - (void)setAccessibilityElementsHidden:(BOOL)hidden;	// 0x32bd03a5
// declared property setter: - (void)setAccessibilityFrame:(CGRect)frame;	// 0x32bcc445
// declared property setter: - (void)setAccessibilityHint:(id)hint;	// 0x32bcc499
// converted property setter: - (void)setAccessibilityIdentifier:(id)identifier;	// 0x32bc5649
// declared property setter: - (void)setAccessibilityLabel:(id)label;	// 0x32bc565d
// declared property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x32cac881
// declared property setter: - (void)setAccessibilityTraits:(unsigned long long)traits;	// 0x32bcc409
// declared property setter: - (void)setAccessibilityValue:(id)value;	// 0x32bcc3f1
// declared property setter: - (void)setAccessibilityViewIsModal:(BOOL)modal;	// 0x32c4689d
// declared property setter: - (void)setIsAccessibilityElement:(BOOL)element;	// 0x32bcc175
// declared property setter: - (void)setShouldGroupAccessibilityChildren:(BOOL)groupAccessibilityChildren;	// 0x32ca5859
// declared property getter: - (BOOL)shouldGroupAccessibilityChildren;	// 0x32bc58c1
- (id)storedAccessibilityActivationPoint;	// 0x32d80dd9
- (id)storedAccessibilityElementsHidden;	// 0x32bc59c9
- (id)storedAccessibilityFrame;	// 0x32bc5771
- (id)storedAccessibilityTraits;	// 0x32bc5459
- (id)storedAccessibilityViewIsModal;	// 0x32bfae15
- (id)storedIsAccessibilityElement;	// 0x32bc5469
- (id)storedShouldGroupAccessibilityChildren;	// 0x32bc58e9
@end

@interface NSObject (UIAccessibilityFocus)
- (void)accessibilityElementDidBecomeFocused;	// 0x32d80e25
- (void)accessibilityElementDidLoseFocus;	// 0x32d80e29
- (BOOL)accessibilityElementIsFocused;	// 0x32d80e2d
@end

@interface NSObject (UIAccessibilityAction)
- (void)accessibilityDecrement;	// 0x32d80e35
- (void)accessibilityIncrement;	// 0x32d80e31
- (BOOL)accessibilityPerformEscape;	// 0x32d80e3d
- (BOOL)accessibilityPerformMagicTap;	// 0x32d80e41
- (BOOL)accessibilityScroll:(int)scroll;	// 0x32d80e39
@end

@interface NSObject (UIAccessibilityContainer)
- (id)accessibilityElementAtIndex:(int)index;	// 0x32d80e49
- (int)accessibilityElementCount;	// 0x32d80e45
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x32d80e4d
@end

@interface NSObject (UIAccessibilityPrivate)
+ (BOOL)__accessibilityGuidedAccessStateEnabled;	// 0x32d80e55
- (void)_accessibilityFinalize;	// 0x32b11615
- (void)accessibilitySetIdentification:(id)identification;	// 0x32b2fe79
@end

@interface NSObject (UIKitAccessibilityInterfaceBuilderSupport)
- (unsigned long long)defaultAccessibilityTraits;	// 0x32d80e59
- (BOOL)isAccessibilityElementByDefault;	// 0x32d80e6d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32d80e71
@end

@interface NSObject (UIAppearanceAdditions)
+ (void)_installAppearanceSwizzleForSetter:(id)setter;	// 0x32c69119
@end

@interface NSObject (NSLayoutConstraintCallsThis)
- (id)className;	// 0x32f1a9b1
@end
