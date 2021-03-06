//
//  EditFileViewController.h
//  Owncloud iOs Client
//
//  Created by Noelia Alvarez on 04/05/16.
//
//

/*
 Copyright (C) 2016, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <UIKit/UIKit.h>
#import "FileDto.h"

#define shareMainViewNibName @"EditFileViewController"

@interface EditFileViewController : UIViewController <UITextViewDelegate>

@property(nonatomic, strong) NSMutableArray *currentDirectoryArray;
@property(nonatomic, strong) FileDto *currentFileDto;

@property (weak, nonatomic) IBOutlet UITextField *titleTextField;
@property (weak, nonatomic) IBOutlet UITextView *bodyTextView;

- (id)initWithFileDto:(FileDto *)fileDto;

@end
