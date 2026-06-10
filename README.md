# MiniFRC Template Robot Repository
<img width="256" height="256" alt="image" src="https://github.com/user-attachments/assets/628e0b02-b3dc-4459-af49-e90902d1ad4b" />


> Put in your team logo or remove it if you like!


## Features
With this repository, there is a couple of quality-of-life additions here to make collaboration, code copying, and structuring easier! Feel free to remove anything that you don't necessarily like or just have no use for it!

### Code Releases
By creating a release, the repository would automatically start a Github Action to zip all your files up in the `src` folder into one .zip file! This can be used for transfering information from one teammate to the next or setting stable/final version code!
> [!TIP]
> Need help understanding what a release is and how to do it? Take a look at [this tutorial](https://docs.github.com/en/repositories/releasing-projects-on-github/managing-releases-in-a-repository)!

### Code Verification
If you ever change anything in the `src` file -- merges, pushes, commits, etc -- the github repo will automatically verify the code within that folder to ensure it works properly! This is especially useful for parity between your on computer files and those on the repository!
> [!NOTE]
> Need help with custom and .ZIP libraries? Find me on the MiniFRC Discord or check out how I did it [here](https://github.com/Turtlerock0010/ADD-VI/blob/main/.github/workflows/verify.yml)!]
> [!NOTE]
> Verification times will take quite long for the first commit! For future commits it will get faster!

### Separate Files
For code that isn't necessarily running on the robot but needs to be kept in the repository for reference or external usage, consider putting it into the `extras`  or `autos` folder! These are detached from the code verifications script so no errors will be thrown if you ever have any there!


## Feel free to change anything here in your template!!!
