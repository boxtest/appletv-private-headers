/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVBindingAdaptor : XXUnknownSuperclass {
	id _owner;	// 4 = 0x4
	NSMutableDictionary *_bindingInfo;	// 8 = 0x8
	NSString *_ignoredBinding;	// 12 = 0xc
}
+ (id)atvValueTransformerFromOptions:(id)options;	// 0x26c149
+ (BOOL)isRunningInInterfaceBuilder;	// 0x26b871
+ (void)setIsRunningInInterfaceBuilder;	// 0x26b86d
- (id)initWithOwner:(id)owner;	// 0x26b875
- (objc_method *)_methodForUpdateFromBinding:(id)binding;	// 0x26bc1d
- (void)bind:(id)bind toObject:(id)object withKeyPath:(id)keyPath options:(id)options;	// 0x26bced
- (id)bindingAdaptorInfoForBinding:(id)binding;	// 0x26c501
- (void)dealloc;	// 0x26b8b5
- (id)description;	// 0x26b9ed
- (id)infoForBinding:(id)binding;	// 0x26c521
- (BOOL)isBindingBound:(id)bound;	// 0x26c4cd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x26c009
- (id)primitiveValueForBinding:(id)binding;	// 0x26c219
- (void)setValue:(id)value forBinding:(id)binding;	// 0x26c541
- (void)unbind:(id)unbind;	// 0x26bf39
- (void)unbindAll;	// 0x26b915
- (BOOL)validateValue:(id *)value forBinding:(id)binding error:(id *)error;	// 0x26c815
- (id)valueForBinding:(id)binding;	// 0x26c4a1
@end
