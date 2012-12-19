/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MLEQPreset : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_localizedName;	// 8 = 0x8
	int _builtInPresetType;	// 12 = 0xc
}
@property(readonly, assign) int builtInPresetType;	// G=0x34891871; converted property
@property(readonly, retain) NSString *localizedName;	// G=0x3489185d; converted property
@property(readonly, retain) NSString *name;	// G=0x34891849; converted property
+ (id)eqPresetForBuiltInPresetType:(int)presetType;	// 0x34891745
+ (id)eqPresetForName:(id)name;	// 0x34872a95
- (id)initWithBuiltInPresetType:(int)presetType;	// 0x348916b1
- (void).cxx_destruct;	// 0x3489189d
// converted property getter: - (int)builtInPresetType;	// 0x34891871
// converted property getter: - (id)localizedName;	// 0x3489185d
// converted property getter: - (id)name;	// 0x34891849
- (int)typeForAVController;	// 0x34891881
@end
