/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABContentControllerProtocol.h"
#import <NSObject.h> // Unknown library

@class UIView;

@interface ABContentController : NSObject <ABContentControllerProtocol> {
	void *_addressBook;	// 4 = 0x4
	id _contentControllerDelegate;	// 8 = 0x8
	UIView *_contentLayer;	// 12 = 0xc
}
@property(assign, nonatomic) void *addressBook;	// G=0x30921bad; S=0x30928c95; 
@property(assign) id contentControllerDelegate;	// G=0x30928cc9; S=0x30928cd9; converted property
- (id)init;	// 0x30928c3d
- (id)initWithContentControllerDelegate:(id)contentControllerDelegate addressBook:(void *)book;	// 0x308ee56d
// declared property getter: - (void *)addressBook;	// 0x30921bad
- (void)back:(BOOL)back save:(BOOL)save;	// 0x30928d6d
- (void)cleanUpContentLayer;	// 0x30928ced
// converted property getter: - (id)contentControllerDelegate;	// 0x30928cc9
- (id)contentView;	// 0x30928ce9
- (BOOL)contentViewIsVisible;	// 0x30928cf1
- (void)dealloc;	// 0x30928c51
- (void)displayScrollerIndicators;	// 0x30928d25
- (void)preloadController;	// 0x30928d75
- (void)reload;	// 0x30928d71
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x30928c95
// converted property setter: - (void)setContentControllerDelegate:(id)delegate;	// 0x30928cd9
@end
