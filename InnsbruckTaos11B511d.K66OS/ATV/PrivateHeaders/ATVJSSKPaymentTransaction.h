/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVJSObject.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SKPaymentTransaction;

__attribute__((visibility("hidden")))
@interface ATVJSSKPaymentTransaction : XXUnknownSuperclass <ATVJSObject> {
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	SKPaymentTransaction *_paymentTransaction;	// 8 = 0x8
}
@property(readonly, assign) OpaqueJSValue *jsObjectRef;	// G=0x150315; converted property
@property(readonly, assign, nonatomic) SKPaymentTransaction *paymentTransaction;	// G=0x150339; @synthesize=_paymentTransaction
+ (void)addClassDefinitionInContext:(OpaqueJSContext *)context;	// 0x14fe9d
+ (id)paymentTransactionFromJSValue:(OpaqueJSValue *)jsvalue context:(OpaqueJSContext *)context;	// 0x150145
- (id)init;	// 0x1501a1
- (id)initWithPaymentTransaction:(id)paymentTransaction context:(OpaqueJSContext *)context;	// 0x1501e9
- (void)_jsFinalize;	// 0x150325
- (void)dealloc;	// 0x1502c9
// converted property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x150315
// declared property getter: - (id)paymentTransaction;	// 0x150339
@end

