/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface SSDialogButton : NSObject {
	NSDictionary *_actionDictionary;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *URLTarget;	// G=0x3782ca41; 
@property(readonly, assign, nonatomic) id actionParameter;	// G=0x3782c995; 
@property(readonly, assign, nonatomic) NSString *buttonAction;	// G=0x3782c9f9; 
@property(readonly, assign, nonatomic) NSString *buttonTitle;	// G=0x3782c95d; 
- (id)init;	// 0x3782c825
- (id)initWithTitle:(id)title actionDictionary:(id)dictionary;	// 0x3782c839
// declared property getter: - (id)URLTarget;	// 0x3782ca41
// declared property getter: - (id)actionParameter;	// 0x3782c995
// declared property getter: - (id)buttonAction;	// 0x3782c9f9
// declared property getter: - (id)buttonTitle;	// 0x3782c95d
- (void)dealloc;	// 0x3782c8f9
- (id)valueForActionProperty:(id)actionProperty;	// 0x3782ca5d
@end
