/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@protocol BRSelectionHandler;

@interface BRSeriesControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	int _controlType;	// 4 = 0x4
	float _dividerHeight;	// 8 = 0x8
	BOOL _hidePartialPlayedImages;	// 12 = 0xc
	id<BRSelectionHandler> _selectionHandler;	// 16 = 0x10
}
@property(retain) id selectionHandler;	// G=0x341c97e5; S=0x341c97a5; converted property
+ (id)factoryForControlType:(int)controlType hidePartialPlayedImages:(BOOL)images;	// 0x341c967d
- (id)initFactoryForControlType:(int)controlType hidePartialPlayedImages:(BOOL)images;	// 0x341c96c9
- (id)_acquiredDateBasedAssetListItem:(id)item currentControl:(id)control;	// 0x341c9b0d
- (id)_acquiredDateFromAsset:(id)asset;	// 0x341ca2c9
- (id)_airedDateFromAsset:(id)asset;	// 0x341ca2fd
- (void)_assets:(id)assets areHD:(BOOL *)hd haveUnplayed:(BOOL *)unplayed havePartiallyPlayed:(BOOL *)played latestDate:(id *)date;	// 0x341ca4b9
- (void)_badgeListItem:(id)item withInfoFromAsset:(id)asset setRightJustifiedText:(BOOL *)text;	// 0x341ca331
- (id)_episodeBasedAssetListItem:(id)item currentControl:(id)control;	// 0x341c9d21
- (id)_listItemForAsset:(id)asset currentControl:(id)control;	// 0x341c9abd
- (void)_markPlayedUnplayedState:(id)state markNew:(BOOL)aNew markPartialPlayed:(BOOL)played;	// 0x341ca5ed
- (id)_posterControlForSeriesArray:(id)seriesArray currentControl:(id)control;	// 0x341ca029
- (id)_previewControlForData:(id)data currentControl:(id)control;	// 0x341ca17d
- (id)_showBasedAssetListItem:(id)item currentControl:(id)control;	// 0x341c9c0d
- (id)_showBasedSeriesItem:(id)item currentControl:(id)control;	// 0x341c9e91
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x341c97f5
- (void)dealloc;	// 0x341c9759
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x341c99d5
// converted property getter: - (id)selectionHandler;	// 0x341c97e5
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x341c97a5
@end

