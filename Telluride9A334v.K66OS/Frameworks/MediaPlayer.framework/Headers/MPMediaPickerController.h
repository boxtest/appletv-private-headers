/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "UIScrollViewDelegate.h"
#import "MediaPickerModalContextDelegate.h"

@class NSString, MPMediaPickerControllerInternal;
@protocol MPMediaPickerControllerDelegate;

@interface MPMediaPickerController : UIViewController <MediaPickerModalContextDelegate, UIScrollViewDelegate> {
@private
	MPMediaPickerControllerInternal *_internal;	// 156 = 0x9c
}
@property(assign, nonatomic) BOOL allowsPickingMultipleItems;	// G=0x34e29355; S=0x34e29379; 
@property(assign, nonatomic) id<MPMediaPickerControllerDelegate> delegate;	// G=0x34e29295; S=0x34e29275; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x34e29255; 
@property(copy, nonatomic) NSString *prompt;	// G=0x34e29335; S=0x34e292b5; 
+ (void)preheatMediaPicker;	// 0x34e293e5
- (id)init;	// 0x34e28e09
- (id)initWithMediaTypes:(int)mediaTypes;	// 0x34e28e1d
- (void)_pickerDidCancel;	// 0x34e293f5
- (void)_pickerDidPickItems:(id)_picker;	// 0x34e294c9
// declared property getter: - (BOOL)allowsPickingMultipleItems;	// 0x34e29355
- (void)dealloc;	// 0x34e28ecd
// declared property getter: - (id)delegate;	// 0x34e29295
- (void)loadView;	// 0x34e28f31
- (void)mediaPickerModalContext:(id)context didPickMediaItems:(id)items;	// 0x34e29241
// declared property getter: - (int)mediaTypes;	// 0x34e29255
- (void)modalContextDidDismiss:(id)modalContext withSuccess:(BOOL)success;	// 0x34e29221
// declared property getter: - (id)prompt;	// 0x34e29335
// declared property setter: - (void)setAllowsPickingMultipleItems:(BOOL)items;	// 0x34e29379
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34e29275
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x34e292b5
- (void)viewDidUnload;	// 0x34e291bd
@end

