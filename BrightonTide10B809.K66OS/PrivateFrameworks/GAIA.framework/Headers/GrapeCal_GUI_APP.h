/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

#import "iGaiaGrapeSystemUi.h"
#import "GAIA-Structs.h"
#import <SKUIApplication.h> // Unknown library

@protocol iGaiaProject;

@interface GrapeCal_GUI_APP : SKUIApplication <iGaiaGrapeSystemUi> {
	id<iGaiaProject> proj;	// 48 = 0x30
}
- (id)init;	// 0x33f20a55
- (void)SetProject:(id)project;	// 0x33f20b1d
- (BOOL)handleEvent:(GSEventRef)event;	// 0x33f20af1
- (void)quit;	// 0x33f20ac5
@end
