/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIView, UIRemoteView;

__attribute__((visibility("hidden")))
@interface UIRemoteSheetInfo : NSObject {
@private
	UIView *_sheetView;	// 4 = 0x4
	UIRemoteView *_remoteView;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	SEL _selector;	// 16 = 0x10
	void *_context;	// 20 = 0x14
	int _returnCode;	// 24 = 0x18
}
@property(assign, nonatomic) void *context;	// G=0x32f1c8a1; S=0x32f1c8b1; @synthesize=_context
@property(assign, nonatomic) id delegate;	// G=0x32f1c861; S=0x32f1c871; @synthesize=_delegate
@property(retain, nonatomic) UIRemoteView *remoteView;	// G=0x32f1c82d; S=0x32f1c83d; @synthesize=_remoteView
@property(assign, nonatomic) int returnCode;	// G=0x32f1c8c1; S=0x32f1c8d1; @synthesize=_returnCode
@property(assign, nonatomic) SEL selector;	// G=0x32f1c881; S=0x32f1c891; @synthesize=_selector
@property(retain, nonatomic) UIView *sheetView;	// G=0x32f1c7f9; S=0x32f1c809; @synthesize=_sheetView
// declared property getter: - (void *)context;	// 0x32f1c8a1
- (void)dealloc;	// 0x32f1c799
// declared property getter: - (id)delegate;	// 0x32f1c861
// declared property getter: - (id)remoteView;	// 0x32f1c82d
// declared property getter: - (int)returnCode;	// 0x32f1c8c1
// declared property getter: - (SEL)selector;	// 0x32f1c881
// declared property setter: - (void)setContext:(void *)context;	// 0x32f1c8b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32f1c871
// declared property setter: - (void)setRemoteView:(id)view;	// 0x32f1c83d
// declared property setter: - (void)setReturnCode:(int)code;	// 0x32f1c8d1
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x32f1c891
// declared property setter: - (void)setSheetView:(id)view;	// 0x32f1c809
// declared property getter: - (id)sheetView;	// 0x32f1c7f9
@end

