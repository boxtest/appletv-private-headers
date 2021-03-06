/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <NSObject.h> // Unknown library


@interface UIAXDelegateClearer : NSObject {
	id delegatee;	// 4 = 0x4
	id delegate;	// 8 = 0x8
	SEL clearMethod;	// 12 = 0xc
}
@property(assign, nonatomic) SEL clearMethod;	// G=0x371c613d; S=0x371c614d; @synthesize
@property(assign, nonatomic) id delegate;	// G=0x371c611d; S=0x371c612d; @synthesize
@property(assign, nonatomic) id delegatee;	// G=0x371c60fd; S=0x371c610d; @synthesize
// declared property getter: - (SEL)clearMethod;	// 0x371c613d
- (void)dealloc;	// 0x371c5ff9
// declared property getter: - (id)delegate;	// 0x371c611d
// declared property getter: - (id)delegatee;	// 0x371c60fd
// declared property setter: - (void)setClearMethod:(SEL)method;	// 0x371c614d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x371c612d
// declared property setter: - (void)setDelegatee:(id)delegatee;	// 0x371c610d
@end

