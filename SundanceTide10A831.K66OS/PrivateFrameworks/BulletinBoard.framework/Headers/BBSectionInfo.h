/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString, NSArray;

@interface BBSectionInfo : NSObject <NSCopying, NSCoding> {
	NSString *_sectionID;	// 4 = 0x4
	NSString *_subsectionID;	// 8 = 0x8
	unsigned _sectionType;	// 12 = 0xc
	BOOL _showsInNotificationCenter;	// 16 = 0x10
	unsigned _suppressedSettings;	// 20 = 0x14
	unsigned _pushSettings;	// 24 = 0x18
	unsigned _alertType;	// 28 = 0x1c
	unsigned _notificationCenterLimit;	// 32 = 0x20
	BOOL _showsInLockScreen;	// 36 = 0x24
	BOOL _showsOnBluetoothDevices;	// 37 = 0x25
	NSString *_pathToWeeAppPluginBundle;	// 40 = 0x28
	NSString *_displayName;	// 44 = 0x2c
	NSData *_iconData;	// 48 = 0x30
	NSArray *_subsections;	// 52 = 0x34
	BBSectionInfo *_parentSection;	// 56 = 0x38
	NSString *_factorySectionID;	// 60 = 0x3c
	NSArray *_dataProviderIDs;	// 64 = 0x40
	BOOL _suppressFromSettings;	// 68 = 0x44
	BOOL _displaysCriticalBulletins;	// 69 = 0x45
	int _subsectionPriority;	// 72 = 0x48
	BOOL _hideWeeApp;	// 76 = 0x4c
	unsigned _version;	// 80 = 0x50
	BOOL _showsMessagePreview;	// 84 = 0x54
}
@property(assign, nonatomic) unsigned alertType;	// G=0x33cbaad9; S=0x33cbaae9; @synthesize=_alertType
@property(assign, nonatomic) unsigned bulletinCount;	// G=0x33cb9c91; S=0x33cb9c81; 
@property(copy, nonatomic) NSArray *dataProviderIDs;	// G=0x33cbac4d; S=0x33cbac61; @synthesize=_dataProviderIDs
@property(copy, nonatomic) NSString *displayName;	// G=0x33cbab1d; S=0x33cbab31; @synthesize=_displayName
@property(assign, nonatomic) BOOL displaysCriticalBulletins;	// G=0x33cbab65; S=0x33cbab75; @synthesize=_displaysCriticalBulletins
@property(assign, nonatomic) BOOL enabled;	// G=0x33cb9c69; S=0x33cb9c59; 
@property(copy, nonatomic) NSString *factorySectionID;	// G=0x33cbac29; S=0x33cbac3d; @synthesize=_factorySectionID
@property(assign, nonatomic) BOOL hideWeeApp;	// G=0x33cbac09; S=0x33cbac19; @synthesize=_hideWeeApp
@property(copy, nonatomic) NSData *iconData;	// G=0x33cbab41; S=0x33cbab55; @synthesize=_iconData
@property(assign, nonatomic) unsigned notificationCenterLimit;	// G=0x33cbaa99; S=0x33cbaaa9; @synthesize=_notificationCenterLimit
@property(assign, nonatomic) BBSectionInfo *parentSection;	// G=0x33cbaba9; S=0x33cbabb9; @synthesize=_parentSection
@property(copy, nonatomic) NSString *pathToWeeAppPluginBundle;	// G=0x33cbaaf9; S=0x33cbab0d; @synthesize=_pathToWeeAppPluginBundle
@property(assign, nonatomic) unsigned pushSettings;	// G=0x33cbaab9; S=0x33cbaac9; @synthesize=_pushSettings
@property(copy, nonatomic) NSString *sectionID;	// G=0x33cba9b1; S=0x33cba9c5; @synthesize=_sectionID
@property(assign, nonatomic) unsigned sectionType;	// G=0x33cba9f9; S=0x33cbaa09; @synthesize=_sectionType
@property(assign, nonatomic) BOOL showsInLockScreen;	// G=0x33cbaa59; S=0x33cbaa69; @synthesize=_showsInLockScreen
@property(assign, nonatomic) BOOL showsInNotificationCenter;	// G=0x33cbaa39; S=0x33cbaa49; @synthesize=_showsInNotificationCenter
@property(assign, nonatomic) BOOL showsMessagePreview;	// G=0x33cbac91; S=0x33cbaca1; @synthesize=_showsMessagePreview
@property(assign, nonatomic) BOOL showsOnBluetoothDevices;	// G=0x33cbaa79; S=0x33cbaa89; @synthesize=_showsOnBluetoothDevices
@property(copy, nonatomic) NSString *subsectionID;	// G=0x33cba9d5; S=0x33cba9e9; @synthesize=_subsectionID
@property(assign, nonatomic) int subsectionPriority;	// G=0x33cbabc9; S=0x33cbabd9; @synthesize=_subsectionPriority
@property(copy, nonatomic) NSArray *subsections;	// G=0x33cbab85; S=0x33cbab99; @synthesize=_subsections
@property(assign, nonatomic) BOOL suppressFromSettings;	// G=0x33cbaa19; S=0x33cbaa29; @synthesize=_suppressFromSettings
@property(assign, nonatomic) unsigned suppressedSettings;	// G=0x33cbabe9; S=0x33cbabf9; @synthesize=_suppressedSettings
@property(assign, nonatomic) unsigned version;	// G=0x33cbac71; S=0x33cbac81; @synthesize=_version
+ (id)defaultSectionInfoForType:(unsigned)type;	// 0x33cb8e95
+ (BOOL)defaultStateForSetting:(unsigned)setting inSectionType:(unsigned)sectionType;	// 0x33cb8e6d
- (id)init;	// 0x33cb8ef5
- (id)initWithCoder:(id)coder;	// 0x33cba125
- (void)_addSubsection:(id)subsection;	// 0x33cb96fd
- (void)_associateDataProviderSectionInfo:(id)info;	// 0x33cb9ab9
- (void)_configureWithDefaultsForSectionType:(unsigned)sectionType;	// 0x33cb90d1
- (void)_dissociateDataProviderSectionInfo:(id)info;	// 0x33cb9b81
- (id)_pushSettingsDescription;	// 0x33cb9205
- (void)_replaceSubsection:(id)subsection;	// 0x33cb9829
- (id)_subsectionForID:(id)anId;	// 0x33cb99ad
// declared property getter: - (unsigned)alertType;	// 0x33cbaad9
// declared property getter: - (unsigned)bulletinCount;	// 0x33cb9c91
- (id)copyWithZone:(NSZone *)zone;	// 0x33cb9ca1
// declared property getter: - (id)dataProviderIDs;	// 0x33cbac4d
- (void)dealloc;	// 0x33cb8f3d
- (id)description;	// 0x33cb92cd
// declared property getter: - (id)displayName;	// 0x33cbab1d
// declared property getter: - (BOOL)displaysCriticalBulletins;	// 0x33cbab65
- (id)effectiveSectionInfo;	// 0x33cbacb1
- (id)effectiveSectionInfoWithFactoryInfo:(id)factoryInfo;	// 0x33cbb249
// declared property getter: - (BOOL)enabled;	// 0x33cb9c69
- (void)encodeWithCoder:(id)coder;	// 0x33cba5e9
// declared property getter: - (id)factorySectionID;	// 0x33cbac29
// declared property getter: - (BOOL)hideWeeApp;	// 0x33cbac09
// declared property getter: - (id)iconData;	// 0x33cbab41
// declared property getter: - (unsigned)notificationCenterLimit;	// 0x33cbaa99
// declared property getter: - (id)parentSection;	// 0x33cbaba9
// declared property getter: - (id)pathToWeeAppPluginBundle;	// 0x33cbaaf9
// declared property getter: - (unsigned)pushSettings;	// 0x33cbaab9
// declared property getter: - (id)sectionID;	// 0x33cba9b1
// declared property getter: - (unsigned)sectionType;	// 0x33cba9f9
// declared property setter: - (void)setAlertType:(unsigned)type;	// 0x33cbaae9
// declared property setter: - (void)setBulletinCount:(unsigned)count;	// 0x33cb9c81
// declared property setter: - (void)setDataProviderIDs:(id)ids;	// 0x33cbac61
// declared property setter: - (void)setDisplayName:(id)name;	// 0x33cbab31
// declared property setter: - (void)setDisplaysCriticalBulletins:(BOOL)bulletins;	// 0x33cbab75
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x33cb9c59
// declared property setter: - (void)setFactorySectionID:(id)anId;	// 0x33cbac3d
// declared property setter: - (void)setHideWeeApp:(BOOL)app;	// 0x33cbac19
// declared property setter: - (void)setIconData:(id)data;	// 0x33cbab55
// declared property setter: - (void)setNotificationCenterLimit:(unsigned)limit;	// 0x33cbaaa9
// declared property setter: - (void)setParentSection:(id)section;	// 0x33cbabb9
// declared property setter: - (void)setPathToWeeAppPluginBundle:(id)weeAppPluginBundle;	// 0x33cbab0d
// declared property setter: - (void)setPushSettings:(unsigned)settings;	// 0x33cbaac9
// declared property setter: - (void)setSectionID:(id)anId;	// 0x33cba9c5
// declared property setter: - (void)setSectionType:(unsigned)type;	// 0x33cbaa09
// declared property setter: - (void)setShowsInLockScreen:(BOOL)lockScreen;	// 0x33cbaa69
// declared property setter: - (void)setShowsInNotificationCenter:(BOOL)notificationCenter;	// 0x33cbaa49
// declared property setter: - (void)setShowsMessagePreview:(BOOL)preview;	// 0x33cbaca1
// declared property setter: - (void)setShowsOnBluetoothDevices:(BOOL)devices;	// 0x33cbaa89
// declared property setter: - (void)setSubsectionID:(id)anId;	// 0x33cba9e9
// declared property setter: - (void)setSubsectionPriority:(int)priority;	// 0x33cbabd9
// declared property setter: - (void)setSubsections:(id)subsections;	// 0x33cbab99
// declared property setter: - (void)setSuppressFromSettings:(BOOL)settings;	// 0x33cbaa29
// declared property setter: - (void)setSuppressedSettings:(unsigned)settings;	// 0x33cbabf9
// declared property setter: - (void)setVersion:(unsigned)version;	// 0x33cbac81
// declared property getter: - (BOOL)showsInLockScreen;	// 0x33cbaa59
// declared property getter: - (BOOL)showsInNotificationCenter;	// 0x33cbaa39
// declared property getter: - (BOOL)showsMessagePreview;	// 0x33cbac91
// declared property getter: - (BOOL)showsOnBluetoothDevices;	// 0x33cbaa79
// declared property getter: - (id)subsectionID;	// 0x33cba9d5
// declared property getter: - (int)subsectionPriority;	// 0x33cbabc9
// declared property getter: - (id)subsections;	// 0x33cbab85
// declared property getter: - (BOOL)suppressFromSettings;	// 0x33cbaa19
// declared property getter: - (unsigned)suppressedSettings;	// 0x33cbabe9
// declared property getter: - (unsigned)version;	// 0x33cbac71
@end
