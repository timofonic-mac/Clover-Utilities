//
//  CloverPrefPane.h
//  CloverPrefPane
//
//  Created by Kozlek on 15/05/13.
//  Copyright (c) 2013 Kozlek. All rights reserved.
//

#import <PreferencePanes/PreferencePanes.h>
#import <ServiceManagement/ServiceManagement.h>
#import <SecurityInterface/SFAuthorizationView.h>

@interface CloverPrefPane : NSPreferencePane
{
    io_registry_entry_t _gOptionsRef;
    NSString *_updaterPlistPath;
    NSDictionary *_diskutilList;
    NSDictionary *_themesInfo;
    NSArray *_efiPartitions;
    NSArray *_nvramPartitions;
    NSArray *_booterPaths;
    
    NSString *_kernelBootArgs;
    NSString *_cloverTheme;
    NSNumber *_cloverOldLogLineCount;
    NSString *_cloverLogEveryBoot;
    NSString *_cloverMountEfiPartition;
    NSString *_cloverNvramPartition;

    
    IBOutlet SFAuthorizationView *_authorizationView;
    
    IBOutlet NSTextField *_lastBootedTextField;
    IBOutlet NSTextField *_lastInstalledTextField;
    IBOutlet NSPopUpButton *_updatesIntervalPopup;
    IBOutlet NSTextField *_lastUpdateTextField;
    IBOutlet NSButton *_checkNowButton;
}

@property (readonly) IBOutlet NSDictionary* diskutilList;
@property (readonly) IBOutlet NSArray* allDisks;
@property (readonly) IBOutlet NSArray* wholeDisks;
@property (readonly) IBOutlet NSArray* volumes;
@property (readonly) IBOutlet NSArray* efiPartitions;
@property (readonly) IBOutlet NSArray* nvramPartitions;
@property (nonatomic, strong) IBOutlet NSArray* booterPaths;

@property (nonatomic, strong) IBOutlet NSNumber* isUnlocked;

@property (nonatomic, strong) IBOutlet NSString* kernelBootArgs;

@property (nonatomic, strong) IBOutlet NSString* cloverPath;
@property (nonatomic, strong) IBOutlet NSDictionary* themesInfo;
@property (nonatomic, strong) IBOutlet NSString* cloverTheme;
@property (nonatomic, strong) IBOutlet NSDictionary* cloverThemeInfo;

@property (nonatomic, strong) IBOutlet NSNumber* cloverOldLogLineCount;
@property (nonatomic, strong) IBOutlet NSString* cloverLogEveryBoot;
@property (nonatomic, strong) IBOutlet NSNumber* cloverLogEveryBootEnabled;
@property (nonatomic, strong) IBOutlet NSNumber* cloverLogEveryBootLimit;

@property (nonatomic, strong) IBOutlet NSString* cloverMountEfiPartition;
@property (nonatomic, strong) IBOutlet NSString* cloverNvramPartition;

- (IBAction)updatesIntervalChanged:(id)sender;
- (IBAction)checkForUpdatePressed:(id)sender;

@end
